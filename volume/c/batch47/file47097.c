// fichero 47097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47097;

Registro47097 crear_registro47097(int id) {
    Registro47097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
