// fichero 46689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46689;

Registro46689 crear_registro46689(int id) {
    Registro46689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
