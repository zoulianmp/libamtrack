// Automatically created header and body file

#include "AT_R_Wrapper.h"

void AT_run_CPPSC_method_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2_or_dose_Gy,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	const int*	 rdd_model,
	const float* rdd_parameters,
	const int*	 er_model,
	const int*	 gamma_model,
	const float* gamma_parameters,
	int*		 N2,
	const float* fluence_factor,
	const int*	 write_output,
	const int*	 shrink_tails,
	const float* shrink_tails_under,
	const int*	 adjust_N2,
	const int*	 lethal_events_mode,
	float*		 relative_efficiency,
	float*		 d_check,
	float*		 S_HCP,
	float*		 S_gamma,
	float*		 mean_number_of_tracks_contrib,
	float*		 start_number_of_tracks_contrib,
	int*		 n_convolutions,
	float*		 lower_Jensen_bound,
	float*		 upper_Jensen_bound)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);
  const long rdd_model_long = (long)(*rdd_model);
  const long er_model_long = (long)(*er_model);
  const long gamma_model_long = (long)(*gamma_model);
  long N2_long = (long)(*N2);
  const double fluence_factor_double = (double)(*fluence_factor);
  const bool write_output_bool = (bool)(*write_output);
  const bool shrink_tails_bool = (bool)(*shrink_tails);
  const double shrink_tails_under_double = (double)(*shrink_tails_under);
  const bool adjust_N2_bool = (bool)(*adjust_N2);
  const bool lethal_events_mode_bool = (bool)(*lethal_events_mode);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* fluence_cm2_or_dose_Gy_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_or_dose_Gy_double[i] = (double)fluence_cm2_or_dose_Gy[i];
  }

//Allocate space for the input parameter.
  double* rdd_parameters_double = (double*)calloc(4,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < 4; i++){
	rdd_parameters_double[i] = (double)rdd_parameters[i];
  }

//Allocate space for the input parameter.
  double* gamma_parameters_double = (double*)calloc(9,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < 9; i++){
	gamma_parameters_double[i] = (double)gamma_parameters[i];
  }

//Define type-casted output variables
	double relative_efficiency_double = 0;
	double d_check_double = 0;
	double S_HCP_double = 0;
	double S_gamma_double = 0;
	double mean_number_of_tracks_contrib_double = 0;
	double start_number_of_tracks_contrib_double = 0;
	long n_convolutions_long = 0;
	double lower_Jensen_bound_double = 0;
	double upper_Jensen_bound_double = 0;

  AT_run_CPPSC_method( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_or_dose_Gy_double,
	material_no_long,
	stopping_power_source_no_long,
	rdd_model_long,
	rdd_parameters_double,
	er_model_long,
	gamma_model_long,
	gamma_parameters_double,
	N2_long,
	fluence_factor_double,
	write_output_bool,
	shrink_tails_bool,
	shrink_tails_under_double,
	adjust_N2_bool,
	lethal_events_mode_bool,
	&relative_efficiency_double,
	&d_check_double,
	&S_HCP_double,
	&S_gamma_double,
	&mean_number_of_tracks_contrib_double,
	&start_number_of_tracks_contrib_double,
	&n_convolutions_long,
	&lower_Jensen_bound_double,
	&upper_Jensen_bound_double);

//Results:
  *N2 = (int)N2_long;

  *relative_efficiency = (float)relative_efficiency_double;

  *d_check = (float)d_check_double;

  *S_HCP = (float)S_HCP_double;

  *S_gamma = (float)S_gamma_double;

  *mean_number_of_tracks_contrib = (float)mean_number_of_tracks_contrib_double;

  *start_number_of_tracks_contrib = (float)start_number_of_tracks_contrib_double;

  *n_convolutions = (int)n_convolutions_long;

  *lower_Jensen_bound = (float)lower_Jensen_bound_double;

  *upper_Jensen_bound = (float)upper_Jensen_bound_double;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_or_dose_Gy_double);
  free(rdd_parameters_double);
  free(gamma_parameters_double);
}


void AT_run_GSM_method_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2_or_dose_Gy,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	const int*	 rdd_model,
	const float* rdd_parameters,
	const int*	 er_model,
	const int*	 gamma_model,
	const float* gamma_parameters,
	const int*	 N_runs,
	const int*	 write_output,
	const int*	 nX,
	const float* voxel_size_m,
	const int*	 lethal_events_mode,
	float*		 relative_efficiency,
	float*		 d_check,
	float*		 S_HCP,
	float*		 S_gamma,
	float*		 n_particles,
	float*		 sd_relative_efficiency,
	float*		 sd_d_check,
	float*		 sd_S_HCP,
	float*		 sd_S_gamma,
	float*		 sd_n_particles)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);
  const long rdd_model_long = (long)(*rdd_model);
  const long er_model_long = (long)(*er_model);
  const long gamma_model_long = (long)(*gamma_model);
  const long N_runs_long = (long)(*N_runs);
  const bool write_output_bool = (bool)(*write_output);
  const long nX_long = (long)(*nX);
  const double voxel_size_m_double = (double)(*voxel_size_m);
  const bool lethal_events_mode_bool = (bool)(*lethal_events_mode);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* fluence_cm2_or_dose_Gy_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_or_dose_Gy_double[i] = (double)fluence_cm2_or_dose_Gy[i];
  }

//Allocate space for the input parameter.
  double* rdd_parameters_double = (double*)calloc(4,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < 4; i++){
	rdd_parameters_double[i] = (double)rdd_parameters[i];
  }

//Allocate space for the input parameter.
  double* gamma_parameters_double = (double*)calloc(9,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < 9; i++){
	gamma_parameters_double[i] = (double)gamma_parameters[i];
  }

//Define type-casted output variables
	double relative_efficiency_double = 0;
	double d_check_double = 0;
	double S_HCP_double = 0;
	double S_gamma_double = 0;
	double n_particles_double = 0;
	double sd_relative_efficiency_double = 0;
	double sd_d_check_double = 0;
	double sd_S_HCP_double = 0;
	double sd_S_gamma_double = 0;
	double sd_n_particles_double = 0;

  AT_run_GSM_method( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_or_dose_Gy_double,
	material_no_long,
	stopping_power_source_no_long,
	rdd_model_long,
	rdd_parameters_double,
	er_model_long,
	gamma_model_long,
	gamma_parameters_double,
	N_runs_long,
	write_output_bool,
	nX_long,
	voxel_size_m_double,
	lethal_events_mode_bool,
	&relative_efficiency_double,
	&d_check_double,
	&S_HCP_double,
	&S_gamma_double,
	&n_particles_double,
	&sd_relative_efficiency_double,
	&sd_d_check_double,
	&sd_S_HCP_double,
	&sd_S_gamma_double,
	&sd_n_particles_double);

//Results:
  *relative_efficiency = (float)relative_efficiency_double;

  *d_check = (float)d_check_double;

  *S_HCP = (float)S_HCP_double;

  *S_gamma = (float)S_gamma_double;

  *n_particles = (float)n_particles_double;

  *sd_relative_efficiency = (float)sd_relative_efficiency_double;

  *sd_d_check = (float)sd_d_check_double;

  *sd_S_HCP = (float)sd_S_HCP_double;

  *sd_S_gamma = (float)sd_S_gamma_double;

  *sd_n_particles = (float)sd_n_particles_double;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_or_dose_Gy_double);
  free(rdd_parameters_double);
  free(gamma_parameters_double);
}


void AT_run_IGK_method_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2_or_dose_Gy,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	const int*	 rdd_model,
	const float* rdd_parameters,
	const int*	 er_model,
	const int*	 gamma_model,
	const float* gamma_parameters,
	const float* saturation_cross_section_factor,
	const int*	 write_output,
	float*		 relative_efficiency,
	float*		 S_HCP,
	float*		 S_gamma,
	float*		 sI_cm2,
	float*		 gamma_dose_Gy,
	float*		 P_I,
	float*		 P_g)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);
  const long rdd_model_long = (long)(*rdd_model);
  const long er_model_long = (long)(*er_model);
  const long gamma_model_long = (long)(*gamma_model);
  const double saturation_cross_section_factor_double = (double)(*saturation_cross_section_factor);
  const bool write_output_bool = (bool)(*write_output);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* fluence_cm2_or_dose_Gy_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_or_dose_Gy_double[i] = (double)fluence_cm2_or_dose_Gy[i];
  }

//Allocate space for the input parameter.
  double* rdd_parameters_double = (double*)calloc(4,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < 4; i++){
	rdd_parameters_double[i] = (double)rdd_parameters[i];
  }

//Allocate space for the input parameter.
  double* gamma_parameters_double = (double*)calloc(9,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < 9; i++){
	gamma_parameters_double[i] = (double)gamma_parameters[i];
  }

//Define type-casted output variables
	double relative_efficiency_double = 0;
	double S_HCP_double = 0;
	double S_gamma_double = 0;
	double sI_cm2_double = 0;
	double gamma_dose_Gy_double = 0;
	double P_I_double = 0;
	double P_g_double = 0;

  AT_run_IGK_method( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_or_dose_Gy_double,
	material_no_long,
	stopping_power_source_no_long,
	rdd_model_long,
	rdd_parameters_double,
	er_model_long,
	gamma_model_long,
	gamma_parameters_double,
	saturation_cross_section_factor_double,
	write_output_bool,
	&relative_efficiency_double,
	&S_HCP_double,
	&S_gamma_double,
	&sI_cm2_double,
	&gamma_dose_Gy_double,
	&P_I_double,
	&P_g_double);

//Results:
  *relative_efficiency = (float)relative_efficiency_double;

  *S_HCP = (float)S_HCP_double;

  *S_gamma = (float)S_gamma_double;

  *sI_cm2 = (float)sI_cm2_double;

  *gamma_dose_Gy = (float)gamma_dose_Gy_double;

  *P_I = (float)P_I_double;

  *P_g = (float)P_g_double;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_or_dose_Gy_double);
  free(rdd_parameters_double);
  free(gamma_parameters_double);
}


void AT_CSDA_range_m_R( const int*		number_of_particles,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	float*		 CSDA_range_m)
{
  long i;
  const long number_of_particles_long = (long)(*number_of_particles);
  const long material_no_long = (long)(*material_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_particles_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_particles_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_particles_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* CSDA_range_m_double = (double*)calloc(number_of_particles_long,sizeof(double));

  AT_CSDA_range_m( number_of_particles_long,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	CSDA_range_m_double);

//Results:
  for(i = 0 ; i < number_of_particles_long; i++){
	CSDA_range_m[i] = (float)CSDA_range_m_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(CSDA_range_m_double);
}


void AT_CSDA_range_g_cm2_R( const int*		number_of_particles,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	float*		 CSDA_range_g_cm2)
{
  long i;
  const long number_of_particles_long = (long)(*number_of_particles);
  const long material_no_long = (long)(*material_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_particles_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_particles_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_particles_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* CSDA_range_g_cm2_double = (double*)calloc(number_of_particles_long,sizeof(double));

  AT_CSDA_range_g_cm2( number_of_particles_long,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	CSDA_range_g_cm2_double);

//Results:
  for(i = 0 ; i < number_of_particles_long; i++){
	CSDA_range_g_cm2[i] = (float)CSDA_range_g_cm2_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(CSDA_range_g_cm2_double);
}


void AT_set_user_material_from_composition_R( const int*		n,
	const float* density_g_cm3,
	const int*	 A,
	const int*	 Z,
	const float* weight_fraction,
	int*		 status)
{
  long i;
  const long n_long = (long)(*n);
  const double density_g_cm3_double = (double)(*density_g_cm3);


//Allocate space for the input parameter.
  long* A_long = (long*)calloc(n_long,sizeof(long));
  long* Z_long = (long*)calloc(n_long,sizeof(long));
  double* weight_fraction_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	A_long[i] = (long)A[i];
	Z_long[i] = (long)Z[i];
	weight_fraction_double[i] = (double)weight_fraction[i];
  }

//Define type-casted output variables
	long status_long = 0;

  AT_set_user_material_from_composition( n_long,
	density_g_cm3_double,
	A_long,
	Z_long,
	weight_fraction_double,
	&status_long);

//Results:
  *status = (int)status_long;


//Free allocated space
  free(A_long);
  free(Z_long);
  free(weight_fraction_double);
}


void AT_set_user_material_R( const float*	density_g_cm3,
	const float* I_eV,
	const float* average_A,
	const float* average_Z,
	int*		 status)
{
  const double density_g_cm3_double = (double)(*density_g_cm3);
  const double I_eV_double = (double)(*I_eV);
  const double average_A_double = (double)(*average_A);
  const double average_Z_double = (double)(*average_Z);


//Define type-casted output variables
	long status_long = 0;

  AT_set_user_material( density_g_cm3_double,
	I_eV_double,
	average_A_double,
	average_Z_double,
	&status_long);

//Results:
  *status = (int)status_long;


//Free allocated space
}


void AT_I_eV_from_composition_R( const int*		n,
	const int*	 Z,
	const int*	 A,
	const float* weight_fraction,
	float*		 I_eV)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  long* Z_long = (long*)calloc(n_long,sizeof(long));
  long* A_long = (long*)calloc(n_long,sizeof(long));
  double* weight_fraction_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	Z_long[i] = (long)Z[i];
	A_long[i] = (long)A[i];
	weight_fraction_double[i] = (double)weight_fraction[i];
  }

//Define type-casted output variables
	double I_eV_double = 0;

  AT_I_eV_from_composition( n_long,
	Z_long,
	A_long,
	weight_fraction_double,
	&I_eV_double);

//Results:
  *I_eV = (float)I_eV_double;


//Free allocated space
  free(Z_long);
  free(A_long);
  free(weight_fraction_double);
}


void AT_effective_Z_from_composition_R( const int*		n,
	const int*	 Z,
	const float* weight_fraction,
	const float* exponent,
	float*		 effective_Z)
{
  long i;
  const long n_long = (long)(*n);
  const double exponent_double = (double)(*exponent);


//Allocate space for the input parameter.
  long* Z_long = (long*)calloc(n_long,sizeof(long));
  double* weight_fraction_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	Z_long[i] = (long)Z[i];
	weight_fraction_double[i] = (double)weight_fraction[i];
  }

//Define type-casted output variables
	double effective_Z_double = 0;

  AT_effective_Z_from_composition( n_long,
	Z_long,
	weight_fraction_double,
	exponent_double,
	&effective_Z_double);

//Results:
  *effective_Z = (float)effective_Z_double;


//Free allocated space
  free(Z_long);
  free(weight_fraction_double);
}


void AT_average_Z_from_composition_R( const int*		n,
	const int*	 Z,
	const float* weight_fraction,
	float*		 average_Z)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  long* Z_long = (long*)calloc(n_long,sizeof(long));
  double* weight_fraction_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	Z_long[i] = (long)Z[i];
	weight_fraction_double[i] = (double)weight_fraction[i];
  }

//Define type-casted output variables
	double average_Z_double = 0;

  AT_average_Z_from_composition( n_long,
	Z_long,
	weight_fraction_double,
	&average_Z_double);

//Results:
  *average_Z = (float)average_Z_double;


//Free allocated space
  free(Z_long);
  free(weight_fraction_double);
}


void AT_average_A_from_composition_R( const int*		n,
	const int*	 A,
	const float* weight_fraction,
	float*		 average_A)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  long* A_long = (long*)calloc(n_long,sizeof(long));
  double* weight_fraction_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	A_long[i] = (long)A[i];
	weight_fraction_double[i] = (double)weight_fraction[i];
  }

//Define type-casted output variables
	double average_A_double = 0;

  AT_average_A_from_composition( n_long,
	A_long,
	weight_fraction_double,
	&average_A_double);

//Results:
  *average_A = (float)average_A_double;


//Free allocated space
  free(A_long);
  free(weight_fraction_double);
}


void AT_electron_density_m3_from_composition_R( const int*		n,
	const float* density_g_cm3,
	const int*	 Z,
	const int*	 A,
	const float* weight_fraction,
	float*		 electron_density_m3)
{
  long i;
  const long n_long = (long)(*n);
  const double density_g_cm3_double = (double)(*density_g_cm3);


//Allocate space for the input parameter.
  long* Z_long = (long*)calloc(n_long,sizeof(long));
  long* A_long = (long*)calloc(n_long,sizeof(long));
  double* weight_fraction_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	Z_long[i] = (long)Z[i];
	A_long[i] = (long)A[i];
	weight_fraction_double[i] = (double)weight_fraction[i];
  }

//Define type-casted output variables
	double electron_density_m3_double = 0;

  AT_electron_density_m3_from_composition( n_long,
	density_g_cm3_double,
	Z_long,
	A_long,
	weight_fraction_double,
	&electron_density_m3_double);

//Results:
  *electron_density_m3 = (float)electron_density_m3_double;


//Free allocated space
  free(Z_long);
  free(A_long);
  free(weight_fraction_double);
}


void AT_electron_density_m3_multi_R( const int*		n,
	const float* density_g_cm3,
	const float* average_Z,
	const float* average_A,
	float*		 electron_density_m3)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* density_g_cm3_double = (double*)calloc(n_long,sizeof(double));
  double* average_Z_double = (double*)calloc(n_long,sizeof(double));
  double* average_A_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	density_g_cm3_double[i] = (double)density_g_cm3[i];
	average_Z_double[i] = (double)average_Z[i];
	average_A_double[i] = (double)average_A[i];
  }

//Allocate space for the results.
  double* electron_density_m3_double = (double*)calloc(n_long,sizeof(double));

  AT_electron_density_m3_multi( n_long,
	density_g_cm3_double,
	average_Z_double,
	average_A_double,
	electron_density_m3_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	electron_density_m3[i] = (float)electron_density_m3_double[i];
  }

//Free allocated space
  free(density_g_cm3_double);
  free(average_Z_double);
  free(average_A_double);
  free(electron_density_m3_double);
}


void AT_electron_density_m3_from_material_no_multi_R( const int*		n,
	const int*	 material_no,
	float*		 electron_density_m3)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  long* material_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	material_no_long[i] = (long)material_no[i];
  }

//Allocate space for the results.
  double* electron_density_m3_double = (double*)calloc(n_long,sizeof(double));

  AT_electron_density_m3_from_material_no_multi( n_long,
	material_no_long,
	electron_density_m3_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	electron_density_m3[i] = (float)electron_density_m3_double[i];
  }

//Free allocated space
  free(material_no_long);
  free(electron_density_m3_double);
}


void AT_get_materials_data_R( const int*		number_of_materials,
	const int*	 material_no,
	float*		 density_g_cm3,
	float*		 I_eV,
	float*		 alpha_g_cm2_MeV,
	float*		 p_MeV,
	float*		 m_g_cm2,
	float*		 average_A,
	float*		 average_Z)
{
  long i;
  const long number_of_materials_long = (long)(*number_of_materials);


//Allocate space for the input parameter.
  long* material_no_long = (long*)calloc(number_of_materials_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_materials_long; i++){
	material_no_long[i] = (long)material_no[i];
  }

//Allocate space for the results.
  double* density_g_cm3_double = (double*)calloc(number_of_materials_long,sizeof(double));
  double* I_eV_double = (double*)calloc(number_of_materials_long,sizeof(double));
  double* alpha_g_cm2_MeV_double = (double*)calloc(number_of_materials_long,sizeof(double));
  double* p_MeV_double = (double*)calloc(number_of_materials_long,sizeof(double));
  double* m_g_cm2_double = (double*)calloc(number_of_materials_long,sizeof(double));
  double* average_A_double = (double*)calloc(number_of_materials_long,sizeof(double));
  double* average_Z_double = (double*)calloc(number_of_materials_long,sizeof(double));

  AT_get_materials_data( number_of_materials_long,
	material_no_long,
	density_g_cm3_double,
	I_eV_double,
	alpha_g_cm2_MeV_double,
	p_MeV_double,
	m_g_cm2_double,
	average_A_double,
	average_Z_double);

//Results:
  for(i = 0 ; i < number_of_materials_long; i++){
	density_g_cm3[i] = (float)density_g_cm3_double[i];
	I_eV[i] = (float)I_eV_double[i];
	alpha_g_cm2_MeV[i] = (float)alpha_g_cm2_MeV_double[i];
	p_MeV[i] = (float)p_MeV_double[i];
	m_g_cm2[i] = (float)m_g_cm2_double[i];
	average_A[i] = (float)average_A_double[i];
	average_Z[i] = (float)average_Z_double[i];
  }

//Free allocated space
  free(material_no_long);
  free(density_g_cm3_double);
  free(I_eV_double);
  free(alpha_g_cm2_MeV_double);
  free(p_MeV_double);
  free(m_g_cm2_double);
  free(average_A_double);
  free(average_Z_double);
}


void AT_nuclear_spin_from_particle_no_multi_R( const int*		n,
	const int*	 particle_no,
	float*		 I,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* I_double = (double*)calloc(n_long,sizeof(double));

  int returnValue_internal = 	AT_nuclear_spin_from_particle_no_multi( n_long,
	particle_no_long,
	I_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	I[i] = (float)I_double[i];
  }

//Free allocated space
  free(particle_no_long);
  free(I_double);
}


void AT_Z_from_particle_no_R( const int*		n,
	const int*	 particle_no,
	int*		 Z,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  long* Z_long = (long*)calloc(n_long,sizeof(long));

  int returnValue_internal = 	AT_Z_from_particle_no( n_long,
	particle_no_long,
	Z_long);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	Z[i] = (int)Z_long[i];
  }

//Free allocated space
  free(particle_no_long);
  free(Z_long);
}


void AT_A_from_particle_no_R( const int*		n,
	const int*	 particle_no,
	int*		 A,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  long* A_long = (long*)calloc(n_long,sizeof(long));

  int returnValue_internal = 	AT_A_from_particle_no( n_long,
	particle_no_long,
	A_long);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	A[i] = (int)A_long[i];
  }

//Free allocated space
  free(particle_no_long);
  free(A_long);
}


void AT_particle_no_from_Z_and_A_R( const int*		n,
	const int*	 Z,
	const int*	 A,
	int*		 particle_no,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  long* Z_long = (long*)calloc(n_long,sizeof(long));
  long* A_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	Z_long[i] = (long)Z[i];
	A_long[i] = (long)A[i];
  }

//Allocate space for the results.
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));

  int returnValue_internal = 	AT_particle_no_from_Z_and_A( n_long,
	Z_long,
	A_long,
	particle_no_long);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	particle_no[i] = (int)particle_no_long[i];
  }

//Free allocated space
  free(Z_long);
  free(A_long);
  free(particle_no_long);
}


void AT_WEPL_Bethe_multi_R( const int*		n,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	const float* slab_thickness_m,
	float*		 WEPL)
{
  long i;
  const long n_long = (long)(*n);
  const long material_no_long = (long)(*material_no);
  const double slab_thickness_m_double = (double)(*slab_thickness_m);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* WEPL_double = (double*)calloc(n_long,sizeof(double));

  AT_WEPL_Bethe_multi( n_long,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	slab_thickness_m_double,
	WEPL_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	WEPL[i] = (float)WEPL_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(WEPL_double);
}


void AT_CSDA_energy_after_slab_E_MeV_u_multi_R( const int*		n,
	const float* E_initial_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	const float* slab_thickness_m,
	float*		 E_final_MeV_u)
{
  long i;
  const long n_long = (long)(*n);
  const long material_no_long = (long)(*material_no);
  const double slab_thickness_m_double = (double)(*slab_thickness_m);


//Allocate space for the input parameter.
  double* E_initial_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_initial_MeV_u_double[i] = (double)E_initial_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* E_final_MeV_u_double = (double*)calloc(n_long,sizeof(double));

  AT_CSDA_energy_after_slab_E_MeV_u_multi( n_long,
	E_initial_MeV_u_double,
	particle_no_long,
	material_no_long,
	slab_thickness_m_double,
	E_final_MeV_u_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	E_final_MeV_u[i] = (float)E_final_MeV_u_double[i];
  }

//Free allocated space
  free(E_initial_MeV_u_double);
  free(particle_no_long);
  free(E_final_MeV_u_double);
}


void AT_CSDA_range_Bethe_g_cm2_multi_R( const int*		n,
	const float* E_initial_MeV_u,
	const float* E_final_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	float*		 CSDA_range_cm2_g)
{
  long i;
  const long n_long = (long)(*n);
  const long material_no_long = (long)(*material_no);


//Allocate space for the input parameter.
  double* E_initial_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  double* E_final_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_initial_MeV_u_double[i] = (double)E_initial_MeV_u[i];
	E_final_MeV_u_double[i] = (double)E_final_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* CSDA_range_cm2_g_double = (double*)calloc(n_long,sizeof(double));

  AT_CSDA_range_Bethe_g_cm2_multi( n_long,
	E_initial_MeV_u_double,
	E_final_MeV_u_double,
	particle_no_long,
	material_no_long,
	CSDA_range_cm2_g_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	CSDA_range_cm2_g[i] = (float)CSDA_range_cm2_g_double[i];
  }

//Free allocated space
  free(E_initial_MeV_u_double);
  free(E_final_MeV_u_double);
  free(particle_no_long);
  free(CSDA_range_cm2_g_double);
}


void AT_Rutherford_SDCS_R( const float*	E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	const int*	 n,
	const float* T_MeV,
	float*		 dsdT_m2_MeV,
	int*		 returnValue)
{
  long i;
  const double E_MeV_u_double = (double)(*E_MeV_u);
  const long particle_no_long = (long)(*particle_no);
  const long material_no_long = (long)(*material_no);
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* T_MeV_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	T_MeV_double[i] = (double)T_MeV[i];
  }

//Allocate space for the results.
  double* dsdT_m2_MeV_double = (double*)calloc(n_long,sizeof(double));

  int returnValue_internal = 	AT_Rutherford_SDCS( E_MeV_u_double,
	particle_no_long,
	material_no_long,
	n_long,
	T_MeV_double,
	dsdT_m2_MeV_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	dsdT_m2_MeV[i] = (float)dsdT_m2_MeV_double[i];
  }

//Free allocated space
  free(T_MeV_double);
  free(dsdT_m2_MeV_double);
}


void AT_Stopping_Power_Mass_Bethe_MeV_cm2_g_multi_R( const int*		n,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	const float* E_restricted_keV,
	float*		 Mass_Stopping_Power_MeV_cm2_g)
{
  long i;
  const long n_long = (long)(*n);
  const long material_no_long = (long)(*material_no);
  const double E_restricted_keV_double = (double)(*E_restricted_keV);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* Mass_Stopping_Power_MeV_cm2_g_double = (double*)calloc(n_long,sizeof(double));

  AT_Stopping_Power_Mass_Bethe_MeV_cm2_g_multi( n_long,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	E_restricted_keV_double,
	Mass_Stopping_Power_MeV_cm2_g_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	Mass_Stopping_Power_MeV_cm2_g[i] = (float)Mass_Stopping_Power_MeV_cm2_g_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(Mass_Stopping_Power_MeV_cm2_g_double);
}


void AT_Stopping_Power_keV_um_multi_R( const int*		stopping_power_source_no,
	const int*	 number_of_particles,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	float*		 Stopping_Power_keV_um)
{
  long i;
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);
  const long number_of_particles_long = (long)(*number_of_particles);
  const long material_no_long = (long)(*material_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_particles_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_particles_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_particles_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* Stopping_Power_keV_um_double = (double*)calloc(number_of_particles_long,sizeof(double));

  AT_Stopping_Power_keV_um_multi( stopping_power_source_no_long,
	number_of_particles_long,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	Stopping_Power_keV_um_double);

//Results:
  for(i = 0 ; i < number_of_particles_long; i++){
	Stopping_Power_keV_um[i] = (float)Stopping_Power_keV_um_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(Stopping_Power_keV_um_double);
}


void AT_Stopping_Power_MeV_cm2_g_multi_R( const int*		stopping_power_source_no,
	const int*	 number_of_particles,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	float*		 Stopping_Power_MeV_cm2_g)
{
  long i;
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);
  const long number_of_particles_long = (long)(*number_of_particles);
  const long material_no_long = (long)(*material_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_particles_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_particles_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_particles_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* Stopping_Power_MeV_cm2_g_double = (double*)calloc(number_of_particles_long,sizeof(double));

  AT_Stopping_Power_MeV_cm2_g_multi( stopping_power_source_no_long,
	number_of_particles_long,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	Stopping_Power_MeV_cm2_g_double);

//Results:
  for(i = 0 ; i < number_of_particles_long; i++){
	Stopping_Power_MeV_cm2_g[i] = (float)Stopping_Power_MeV_cm2_g_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(Stopping_Power_MeV_cm2_g_double);
}


void AT_max_electron_ranges_m_R( const int*		number_of_particles,
	const float* E_MeV_u,
	const int*	 material_no,
	const int*	 er_model,
	float*		 max_electron_range_m)
{
  long i;
  const long number_of_particles_long = (long)(*number_of_particles);
  const int material_no_long = (int)(*material_no);
  const int er_model_long = (int)(*er_model);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_particles_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_particles_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
  }

//Allocate space for the results.
  double* max_electron_range_m_double = (double*)calloc(number_of_particles_long,sizeof(double));

  AT_max_electron_ranges_m( number_of_particles_long,
	E_MeV_u_double,
	material_no_long,
	er_model_long,
	max_electron_range_m_double);

//Results:
  for(i = 0 ; i < number_of_particles_long; i++){
	max_electron_range_m[i] = (float)max_electron_range_m_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(max_electron_range_m_double);
}


void AT_mean_number_of_tracks_contrib_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2,
	const int*	 material_no,
	const int*	 er_model,
	const int*	 stopping_power_source_no,
	float*		 returnValue)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long er_model_long = (long)(*er_model);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* fluence_cm2_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_double[i] = (double)fluence_cm2[i];
  }

  double returnValue_internal = 	AT_mean_number_of_tracks_contrib( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_double,
	material_no_long,
	er_model_long,
	stopping_power_source_no_long);

//Results:

	*returnValue = ( float )returnValue_internal;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_double);
}


void AT_stopping_power_ratio_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2,
	const int*	 material_no,
	const int*	 reference_material_no,
	const int*	 stopping_power_source_no,
	float*		 returnValue)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long reference_material_no_long = (long)(*reference_material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* fluence_cm2_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_double[i] = (double)fluence_cm2[i];
  }

  double returnValue_internal = 	AT_stopping_power_ratio( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_double,
	material_no_long,
	reference_material_no_long,
	stopping_power_source_no_long);

//Results:

	*returnValue = ( float )returnValue_internal;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_double);
}


void AT_dose_weighted_LET_MeV_cm2_g_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	float*		 returnValue)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* fluence_cm2_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_double[i] = (double)fluence_cm2[i];
  }

  double returnValue_internal = 	AT_dose_weighted_LET_MeV_cm2_g( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_double,
	material_no_long,
	stopping_power_source_no_long);

//Results:

	*returnValue = ( float )returnValue_internal;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_double);
}


void AT_fluence_weighted_LET_MeV_cm2_g_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	float*		 returnValue)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* fluence_cm2_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_double[i] = (double)fluence_cm2[i];
  }

  double returnValue_internal = 	AT_fluence_weighted_LET_MeV_cm2_g( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_double,
	material_no_long,
	stopping_power_source_no_long);

//Results:

	*returnValue = ( float )returnValue_internal;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_double);
}


void AT_dose_weighted_E_MeV_u_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	float*		 returnValue)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* fluence_cm2_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_double[i] = (double)fluence_cm2[i];
  }

  double returnValue_internal = 	AT_dose_weighted_E_MeV_u( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_double,
	material_no_long,
	stopping_power_source_no_long);

//Results:

	*returnValue = ( float )returnValue_internal;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_double);
}


void AT_fluence_weighted_E_MeV_u_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const float* fluence_cm2,
	float*		 returnValue)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  double* fluence_cm2_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	fluence_cm2_double[i] = (double)fluence_cm2[i];
  }

  double returnValue_internal = 	AT_fluence_weighted_E_MeV_u( number_of_field_components_long,
	E_MeV_u_double,
	fluence_cm2_double);

//Results:

	*returnValue = ( float )returnValue_internal;


//Free allocated space
  free(E_MeV_u_double);
  free(fluence_cm2_double);
}


void AT_total_fluence_cm2_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* D_Gy,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	float*		 returnValue)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* D_Gy_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	D_Gy_double[i] = (double)D_Gy[i];
  }

  double returnValue_internal = 	AT_total_fluence_cm2( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	D_Gy_double,
	material_no_long,
	stopping_power_source_no_long);

//Results:

	*returnValue = ( float )returnValue_internal;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(D_Gy_double);
}


void AT_total_D_Gy_R( const int*		number_of_field_components,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	float*		 returnValue)
{
  long i;
  const long number_of_field_components_long = (long)(*number_of_field_components);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(number_of_field_components_long,sizeof(double));
  long* particle_no_long = (long*)calloc(number_of_field_components_long,sizeof(long));
  double* fluence_cm2_double = (double*)calloc(number_of_field_components_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < number_of_field_components_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_double[i] = (double)fluence_cm2[i];
  }

  double returnValue_internal = 	AT_total_D_Gy( number_of_field_components_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_double,
	material_no_long,
	stopping_power_source_no_long);

//Results:

	*returnValue = ( float )returnValue_internal;


//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_double);
}


void AT_beam_par_technical_to_physical_R( const int*		n,
	const float* N,
	const float* FWHM_mm,
	float*		 fluence_cm2,
	float*		 sigma_cm)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* N_double = (double*)calloc(n_long,sizeof(double));
  double* FWHM_mm_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	N_double[i] = (double)N[i];
	FWHM_mm_double[i] = (double)FWHM_mm[i];
  }

//Allocate space for the results.
  double* fluence_cm2_double = (double*)calloc(n_long,sizeof(double));
  double* sigma_cm_double = (double*)calloc(n_long,sizeof(double));

  AT_beam_par_technical_to_physical( n_long,
	N_double,
	FWHM_mm_double,
	fluence_cm2_double,
	sigma_cm_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	fluence_cm2[i] = (float)fluence_cm2_double[i];
	sigma_cm[i] = (float)sigma_cm_double[i];
  }

//Free allocated space
  free(N_double);
  free(FWHM_mm_double);
  free(fluence_cm2_double);
  free(sigma_cm_double);
}


void AT_beam_par_physical_to_technical_R( const int*		n,
	const float* fluence_cm2,
	const float* sigma_cm,
	float*		 N,
	float*		 FWHM_mm)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* fluence_cm2_double = (double*)calloc(n_long,sizeof(double));
  double* sigma_cm_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	fluence_cm2_double[i] = (double)fluence_cm2[i];
	sigma_cm_double[i] = (double)sigma_cm[i];
  }

//Allocate space for the results.
  double* N_double = (double*)calloc(n_long,sizeof(double));
  double* FWHM_mm_double = (double*)calloc(n_long,sizeof(double));

  AT_beam_par_physical_to_technical( n_long,
	fluence_cm2_double,
	sigma_cm_double,
	N_double,
	FWHM_mm_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	N[i] = (float)N_double[i];
	FWHM_mm[i] = (float)FWHM_mm_double[i];
  }

//Free allocated space
  free(fluence_cm2_double);
  free(sigma_cm_double);
  free(N_double);
  free(FWHM_mm_double);
}


void AT_fluence_cm2_from_dose_Gy_R( const int*		n,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* D_Gy,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	float*		 fluence_cm2)
{
  long i;
  const long n_long = (long)(*n);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));
  double* D_Gy_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	D_Gy_double[i] = (double)D_Gy[i];
  }

//Allocate space for the results.
  double* fluence_cm2_double = (double*)calloc(n_long,sizeof(double));

  AT_fluence_cm2_from_dose_Gy( n_long,
	E_MeV_u_double,
	particle_no_long,
	D_Gy_double,
	material_no_long,
	stopping_power_source_no_long,
	fluence_cm2_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	fluence_cm2[i] = (float)fluence_cm2_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(D_Gy_double);
  free(fluence_cm2_double);
}


void AT_dose_Gy_from_fluence_cm2_R( const int*		n,
	const float* E_MeV_u,
	const int*	 particle_no,
	const float* fluence_cm2,
	const int*	 material_no,
	const int*	 stopping_power_source_no,
	float*		 dose_Gy)
{
  long i;
  const long n_long = (long)(*n);
  const long material_no_long = (long)(*material_no);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));
  double* fluence_cm2_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	fluence_cm2_double[i] = (double)fluence_cm2[i];
  }

//Allocate space for the results.
  double* dose_Gy_double = (double*)calloc(n_long,sizeof(double));

  AT_dose_Gy_from_fluence_cm2( n_long,
	E_MeV_u_double,
	particle_no_long,
	fluence_cm2_double,
	material_no_long,
	stopping_power_source_no_long,
	dose_Gy_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	dose_Gy[i] = (float)dose_Gy_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(fluence_cm2_double);
  free(dose_Gy_double);
}


void AT_momentum_MeV_c_u_from_E_MeV_u_R( const int*		n,
	const float* E_MeV_u,
	float*		 momentum_MeV_c,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
  }

//Allocate space for the results.
  double* momentum_MeV_c_double = (double*)calloc(n_long,sizeof(double));

  int returnValue_internal = 	AT_momentum_MeV_c_u_from_E_MeV_u( n_long,
	E_MeV_u_double,
	momentum_MeV_c_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	momentum_MeV_c[i] = (float)momentum_MeV_c_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(momentum_MeV_c_double);
}


void AT_max_E_transfer_MeV_R( const int*		n,
	const float* E_MeV_u,
	float*		 max_E_transfer_MeV,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
  }

//Allocate space for the results.
  double* max_E_transfer_MeV_double = (double*)calloc(n_long,sizeof(double));

  int returnValue_internal = 	AT_max_E_transfer_MeV( n_long,
	E_MeV_u_double,
	max_E_transfer_MeV_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	max_E_transfer_MeV[i] = (float)max_E_transfer_MeV_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(max_E_transfer_MeV_double);
}


void AT_effective_charge_from_E_MeV_u_R( const int*		n,
	const float* E_MeV_u,
	const int*	 particle_no,
	float*		 effective_charge,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* effective_charge_double = (double*)calloc(n_long,sizeof(double));

  int returnValue_internal = 	AT_effective_charge_from_E_MeV_u( n_long,
	E_MeV_u_double,
	particle_no_long,
	effective_charge_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	effective_charge[i] = (float)effective_charge_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(effective_charge_double);
}


void AT_energy_straggling_after_slab_E_MeV_u_R( const int*		n,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	const float* slab_thickness_m,
	const float* initial_sigma_E_MeV_u,
	float*		 sigma_E_MeV_u)
{
  long i;
  const long n_long = (long)(*n);
  const long material_no_long = (long)(*material_no);
  const double slab_thickness_m_double = (double)(*slab_thickness_m);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));
  double* initial_sigma_E_MeV_u_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
	initial_sigma_E_MeV_u_double[i] = (double)initial_sigma_E_MeV_u[i];
  }

//Allocate space for the results.
  double* sigma_E_MeV_u_double = (double*)calloc(n_long,sizeof(double));

  AT_energy_straggling_after_slab_E_MeV_u( n_long,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	slab_thickness_m_double,
	initial_sigma_E_MeV_u_double,
	sigma_E_MeV_u_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	sigma_E_MeV_u[i] = (float)sigma_E_MeV_u_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(initial_sigma_E_MeV_u_double);
  free(sigma_E_MeV_u_double);
}


void AT_energy_straggling_MeV2_cm2_g_R( const int*		n,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	float*		 dsE2dz_MeV2_cm2_g)
{
  long i;
  const long n_long = (long)(*n);
  const long material_no_long = (long)(*material_no);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));
  long* particle_no_long = (long*)calloc(n_long,sizeof(long));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
	particle_no_long[i] = (long)particle_no[i];
  }

//Allocate space for the results.
  double* dsE2dz_MeV2_cm2_g_double = (double*)calloc(n_long,sizeof(double));

  AT_energy_straggling_MeV2_cm2_g( n_long,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	dsE2dz_MeV2_cm2_g_double);

//Results:
  for(i = 0 ; i < n_long; i++){
	dsE2dz_MeV2_cm2_g[i] = (float)dsE2dz_MeV2_cm2_g_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(particle_no_long);
  free(dsE2dz_MeV2_cm2_g_double);
}


void AT_gamma_from_E_R( const int*		n,
	const float* E_MeV_u,
	float*		 gamma,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
  }

//Allocate space for the results.
  double* gamma_double = (double*)calloc(n_long,sizeof(double));

  int returnValue_internal = 	AT_gamma_from_E( n_long,
	E_MeV_u_double,
	gamma_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	gamma[i] = (float)gamma_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(gamma_double);
}


void AT_E_MeV_u_from_momentum_MeV_c_u_R( const int*		n,
	const float* momentum_MeV_c_u,
	float*		 E_MeV_u,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* momentum_MeV_c_u_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	momentum_MeV_c_u_double[i] = (double)momentum_MeV_c_u[i];
  }

//Allocate space for the results.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));

  int returnValue_internal = 	AT_E_MeV_u_from_momentum_MeV_c_u( n_long,
	momentum_MeV_c_u_double,
	E_MeV_u_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	E_MeV_u[i] = (float)E_MeV_u_double[i];
  }

//Free allocated space
  free(momentum_MeV_c_u_double);
  free(E_MeV_u_double);
}


void AT_E_from_beta_R( const int*		n,
	const float* beta,
	float*		 E_MeV_u,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* beta_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	beta_double[i] = (double)beta[i];
  }

//Allocate space for the results.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));

  int returnValue_internal = 	AT_E_from_beta( n_long,
	beta_double,
	E_MeV_u_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	E_MeV_u[i] = (float)E_MeV_u_double[i];
  }

//Free allocated space
  free(beta_double);
  free(E_MeV_u_double);
}


void AT_beta_from_E_R( const int*		n,
	const float* E_MeV_u,
	float*		 beta,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);


//Allocate space for the input parameter.
  double* E_MeV_u_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	E_MeV_u_double[i] = (double)E_MeV_u[i];
  }

//Allocate space for the results.
  double* beta_double = (double*)calloc(n_long,sizeof(double));

  int returnValue_internal = 	AT_beta_from_E( n_long,
	E_MeV_u_double,
	beta_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	beta[i] = (float)beta_double[i];
  }

//Free allocated space
  free(E_MeV_u_double);
  free(beta_double);
}


void AT_r_RDD_m_R( const int*		n,
	const float* D_RDD_Gy,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	const int*	 rdd_model,
	const float* rdd_parameter,
	const int*	 er_model,
	const int*	 stopping_power_source_no,
	float*		 r_RDD_m,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);
  const double E_MeV_u_double = (double)(*E_MeV_u);
  const long particle_no_long = (long)(*particle_no);
  const long material_no_long = (long)(*material_no);
  const long rdd_model_long = (long)(*rdd_model);
  const long er_model_long = (long)(*er_model);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* D_RDD_Gy_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	D_RDD_Gy_double[i] = (double)D_RDD_Gy[i];
  }

//Allocate space for the results.
  double* r_RDD_m_double = (double*)calloc(n_long,sizeof(double));

//Allocate space for the input parameter.
  double* rdd_parameter_double = (double*)calloc(4,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < 4; i++){
	rdd_parameter_double[i] = (double)rdd_parameter[i];
  }

  int returnValue_internal = 	AT_r_RDD_m( n_long,
	D_RDD_Gy_double,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	rdd_model_long,
	rdd_parameter_double,
	er_model_long,
	stopping_power_source_no_long,
	r_RDD_m_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	r_RDD_m[i] = (float)r_RDD_m_double[i];
  }

//Free allocated space
  free(D_RDD_Gy_double);
  free(rdd_parameter_double);
  free(r_RDD_m_double);
}


void AT_D_RDD_Gy_R( const int*		n,
	const float* r_m,
	const float* E_MeV_u,
	const int*	 particle_no,
	const int*	 material_no,
	const int*	 rdd_model,
	const float* rdd_parameter,
	const int*	 er_model,
	const int*	 stopping_power_source_no,
	float*		 D_RDD_Gy,
	int*		 returnValue)
{
  long i;
  const long n_long = (long)(*n);
  const double E_MeV_u_double = (double)(*E_MeV_u);
  const long particle_no_long = (long)(*particle_no);
  const long material_no_long = (long)(*material_no);
  const long rdd_model_long = (long)(*rdd_model);
  const long er_model_long = (long)(*er_model);
  const long stopping_power_source_no_long = (long)(*stopping_power_source_no);


//Allocate space for the input parameter.
  double* r_m_double = (double*)calloc(n_long,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < n_long; i++){
	r_m_double[i] = (double)r_m[i];
  }

//Allocate space for the results.
  double* D_RDD_Gy_double = (double*)calloc(n_long,sizeof(double));

//Allocate space for the input parameter.
  double* rdd_parameter_double = (double*)calloc(4,sizeof(double));


//Fill in the input parameter.
  for(i = 0 ; i < 4; i++){
	rdd_parameter_double[i] = (double)rdd_parameter[i];
  }

  int returnValue_internal = 	AT_D_RDD_Gy( n_long,
	r_m_double,
	E_MeV_u_double,
	particle_no_long,
	material_no_long,
	rdd_model_long,
	rdd_parameter_double,
	er_model_long,
	stopping_power_source_no_long,
	D_RDD_Gy_double);

//Results:

	*returnValue = ( int )returnValue_internal;

  for(i = 0 ; i < n_long; i++){
	D_RDD_Gy[i] = (float)D_RDD_Gy_double[i];
  }

//Free allocated space
  free(r_m_double);
  free(rdd_parameter_double);
  free(D_RDD_Gy_double);
}

