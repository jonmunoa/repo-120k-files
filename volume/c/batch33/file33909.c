// fichero 33909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33909;

Registro33909 crear_registro33909(int id) {
    Registro33909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
