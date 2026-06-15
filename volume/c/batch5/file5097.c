// fichero 5097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5097;

Registro5097 crear_registro5097(int id) {
    Registro5097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
