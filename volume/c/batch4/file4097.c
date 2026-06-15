// fichero 4097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4097;

Registro4097 crear_registro4097(int id) {
    Registro4097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
