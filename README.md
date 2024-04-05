Copy Incude/cust_ops_flds.h file and paste  at the inculde dir (where .h are present)
run the pasre script(
parse_custom_ops_fields.pl -L pcmc -I cust_ops_flds.h -O cust_ops_flds.o ) .o file will be generated 
add the extension in cm pin.conf (
- - ops_fields_extension_file pathof.o file
ex: - - ops_fields_extension_file /app/local/oracle/product/pin01/brm12/BRM/PortalDevKit/include/cust_flds_ops.o
) restart the cm

Copy the podl 
run pin_deploy script (
pin_deploy create fm_global_pol.podl
)
restart the cm verify in the sql or developer center 

Copy the fm_global_pol folder  where all the fm are stored
compile the file is in folder with "make all" command .so file will be generated 
add entry in cm pin.conf



