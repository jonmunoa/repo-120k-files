// fichero 1269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1269;

Registro1269 crear_registro1269(int id) {
    Registro1269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
