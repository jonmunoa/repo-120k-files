// fichero 6097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6097;

Registro6097 crear_registro6097(int id) {
    Registro6097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
