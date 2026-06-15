// fichero 1477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1477;

Registro1477 crear_registro1477(int id) {
    Registro1477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
