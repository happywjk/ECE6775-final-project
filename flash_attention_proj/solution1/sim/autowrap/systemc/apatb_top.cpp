// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "input_data"
#define AUTOTB_TVIN_input_data  "../tv/cdatafile/c.top.autotvin_input_data.dat"
// wrapc file define: "output_data"
#define AUTOTB_TVOUT_output_data  "../tv/cdatafile/c.top.autotvout_output_data.dat"
#define AUTOTB_TVIN_output_data  "../tv/cdatafile/c.top.autotvin_output_data.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "output_data"
#define AUTOTB_TVOUT_PC_output_data  "../tv/rtldatafile/rtl.top.autotvout_output_data.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			input_data_depth = 0;
			output_data_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{input_data " << input_data_depth << "}\n";
			total_list << "{output_data " << output_data_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int input_data_depth;
		int output_data_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void top (
float input_data[12288],
float output_data[4096]);

void AESL_WRAP_top (
float input_data[12288],
float output_data[4096])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "output_data"
		aesl_fh.read(AUTOTB_TVOUT_PC_output_data, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_output_data, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_output_data, AESL_token); // data

			sc_bv<32> *output_data_pc_buffer = new sc_bv<32>[4096];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_data', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_data', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					output_data_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_output_data, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_output_data))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: output_data
				{
					// bitslice(31, 0)
					// {
						// celement: output_data(31, 0)
						// {
							sc_lv<32>* output_data_lv0_0_4095_1 = new sc_lv<32>[4096];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: output_data(31, 0)
						{
							// carray: (0) => (4095) @ (1)
							for (int i_0 = 0; i_0 <= 4095; i_0 += 1)
							{
								if (&(output_data[0]) != NULL) // check the null address if the c port is array or others
								{
									output_data_lv0_0_4095_1[hls_map_index].range(31, 0) = sc_bv<32>(output_data_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: output_data(31, 0)
						{
							// carray: (0) => (4095) @ (1)
							for (int i_0 = 0; i_0 <= 4095; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : output_data[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : output_data[0]
								// output_left_conversion : *(int*)&output_data[i_0]
								// output_type_conversion : (output_data_lv0_0_4095_1[hls_map_index]).to_uint64()
								if (&(output_data[0]) != NULL) // check the null address if the c port is array or others
								{
									*(int*)&output_data[i_0] = (output_data_lv0_0_4095_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] output_data_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "input_data"
		char* tvin_input_data = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_data);

		// "output_data"
		char* tvin_output_data = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_output_data);
		char* tvout_output_data = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_output_data);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_input_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_data, tvin_input_data);

		sc_bv<32>* input_data_tvin_wrapc_buffer = new sc_bv<32>[12288];

		// RTL Name: input_data
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: input_data(31, 0)
				{
					// carray: (0) => (12287) @ (1)
					for (int i_0 = 0; i_0 <= 12287; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : input_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_data[0]
						// regulate_c_name       : input_data
						// input_type_conversion : *(int*)&input_data[i_0]
						if (&(input_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> input_data_tmp_mem;
							input_data_tmp_mem = *(int*)&input_data[i_0];
							input_data_tvin_wrapc_buffer[hls_map_index].range(31, 0) = input_data_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12288; i++)
		{
			sprintf(tvin_input_data, "%s\n", (input_data_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_data, tvin_input_data);
		}

		tcl_file.set_num(12288, &tcl_file.input_data_depth);
		sprintf(tvin_input_data, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_data, tvin_input_data);

		// release memory allocation
		delete [] input_data_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_output_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_output_data, tvin_output_data);

		sc_bv<32>* output_data_tvin_wrapc_buffer = new sc_bv<32>[4096];

		// RTL Name: output_data
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: output_data(31, 0)
				{
					// carray: (0) => (4095) @ (1)
					for (int i_0 = 0; i_0 <= 4095; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : output_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : output_data[0]
						// regulate_c_name       : output_data
						// input_type_conversion : *(int*)&output_data[i_0]
						if (&(output_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> output_data_tmp_mem;
							output_data_tmp_mem = *(int*)&output_data[i_0];
							output_data_tvin_wrapc_buffer[hls_map_index].range(31, 0) = output_data_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4096; i++)
		{
			sprintf(tvin_output_data, "%s\n", (output_data_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_output_data, tvin_output_data);
		}

		tcl_file.set_num(4096, &tcl_file.output_data_depth);
		sprintf(tvin_output_data, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_output_data, tvin_output_data);

		// release memory allocation
		delete [] output_data_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		top(input_data, output_data);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_output_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_output_data, tvout_output_data);

		sc_bv<32>* output_data_tvout_wrapc_buffer = new sc_bv<32>[4096];

		// RTL Name: output_data
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: output_data(31, 0)
				{
					// carray: (0) => (4095) @ (1)
					for (int i_0 = 0; i_0 <= 4095; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : output_data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : output_data[0]
						// regulate_c_name       : output_data
						// input_type_conversion : *(int*)&output_data[i_0]
						if (&(output_data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> output_data_tmp_mem;
							output_data_tmp_mem = *(int*)&output_data[i_0];
							output_data_tvout_wrapc_buffer[hls_map_index].range(31, 0) = output_data_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4096; i++)
		{
			sprintf(tvout_output_data, "%s\n", (output_data_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_output_data, tvout_output_data);
		}

		tcl_file.set_num(4096, &tcl_file.output_data_depth);
		sprintf(tvout_output_data, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_output_data, tvout_output_data);

		// release memory allocation
		delete [] output_data_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "input_data"
		delete [] tvin_input_data;
		// release memory allocation: "output_data"
		delete [] tvout_output_data;
		delete [] tvin_output_data;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

