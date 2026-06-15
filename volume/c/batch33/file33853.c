// fichero 33853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33853;

Registro33853 crear_registro33853(int id) {
    Registro33853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
