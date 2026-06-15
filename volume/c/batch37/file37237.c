// fichero 37237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37237;

Registro37237 crear_registro37237(int id) {
    Registro37237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
