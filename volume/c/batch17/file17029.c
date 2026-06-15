// fichero 17029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17029;

Registro17029 crear_registro17029(int id) {
    Registro17029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
