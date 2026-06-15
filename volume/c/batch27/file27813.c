// fichero 27813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27813;

Registro27813 crear_registro27813(int id) {
    Registro27813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
