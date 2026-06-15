// fichero 46029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46029;

Registro46029 crear_registro46029(int id) {
    Registro46029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
