// fichero 6909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6909;

Registro6909 crear_registro6909(int id) {
    Registro6909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
