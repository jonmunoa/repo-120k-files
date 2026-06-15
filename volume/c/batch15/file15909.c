// fichero 15909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15909;

Registro15909 crear_registro15909(int id) {
    Registro15909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
