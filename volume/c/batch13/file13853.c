// fichero 13853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13853;

Registro13853 crear_registro13853(int id) {
    Registro13853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
