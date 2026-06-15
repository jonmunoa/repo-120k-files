// fichero 37705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37705;

Registro37705 crear_registro37705(int id) {
    Registro37705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
