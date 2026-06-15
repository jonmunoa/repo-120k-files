// fichero 16245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16245;

Registro16245 crear_registro16245(int id) {
    Registro16245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
