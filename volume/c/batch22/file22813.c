// fichero 22813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22813;

Registro22813 crear_registro22813(int id) {
    Registro22813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
