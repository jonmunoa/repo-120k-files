// fichero 3597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3597;

Registro3597 crear_registro3597(int id) {
    Registro3597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
