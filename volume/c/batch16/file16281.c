// fichero 16281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16281;

Registro16281 crear_registro16281(int id) {
    Registro16281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
