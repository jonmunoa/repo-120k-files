// fichero 33973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33973;

Registro33973 crear_registro33973(int id) {
    Registro33973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
