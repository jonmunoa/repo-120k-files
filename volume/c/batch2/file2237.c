// fichero 2237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2237;

Registro2237 crear_registro2237(int id) {
    Registro2237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
