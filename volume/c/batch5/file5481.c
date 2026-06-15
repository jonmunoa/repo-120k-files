// fichero 5481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5481;

Registro5481 crear_registro5481(int id) {
    Registro5481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
