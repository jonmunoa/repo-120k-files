// fichero 32909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32909;

Registro32909 crear_registro32909(int id) {
    Registro32909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
