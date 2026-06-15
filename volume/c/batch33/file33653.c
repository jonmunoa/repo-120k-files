// fichero 33653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33653;

Registro33653 crear_registro33653(int id) {
    Registro33653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
