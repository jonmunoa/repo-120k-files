// fichero 39653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39653;

Registro39653 crear_registro39653(int id) {
    Registro39653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
