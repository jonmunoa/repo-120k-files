// fichero 13405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13405;

Registro13405 crear_registro13405(int id) {
    Registro13405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
