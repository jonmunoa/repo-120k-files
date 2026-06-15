// fichero 4665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4665;

Registro4665 crear_registro4665(int id) {
    Registro4665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
