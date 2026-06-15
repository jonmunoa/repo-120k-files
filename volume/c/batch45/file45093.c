// fichero 45093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45093;

Registro45093 crear_registro45093(int id) {
    Registro45093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
