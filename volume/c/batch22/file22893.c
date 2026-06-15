// fichero 22893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22893;

Registro22893 crear_registro22893(int id) {
    Registro22893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
