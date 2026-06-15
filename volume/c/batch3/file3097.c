// fichero 3097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3097;

Registro3097 crear_registro3097(int id) {
    Registro3097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
