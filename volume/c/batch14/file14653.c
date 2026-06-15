// fichero 14653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14653;

Registro14653 crear_registro14653(int id) {
    Registro14653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
