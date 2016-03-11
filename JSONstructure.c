# EnrichAssignments

struct contact_person_info
{
	int contact_person_id[10];
	char firstname[10];
	char lastname[10];
	char email[15];
};
struct contact_info
{
	int id[10];
	char name[10];
	char street[10];
	char area[10];
	char city[15];
	struct contact_person_info contact[2];
};
