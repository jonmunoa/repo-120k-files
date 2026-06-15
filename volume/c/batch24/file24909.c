// fichero 24909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24909;

Registro24909 crear_registro24909(int id) {
    Registro24909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
