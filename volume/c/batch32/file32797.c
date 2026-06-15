// fichero 32797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32797;

Registro32797 crear_registro32797(int id) {
    Registro32797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
