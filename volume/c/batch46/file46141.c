// fichero 46141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46141;

Registro46141 crear_registro46141(int id) {
    Registro46141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
