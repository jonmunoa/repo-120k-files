// fichero 38653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38653;

Registro38653 crear_registro38653(int id) {
    Registro38653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
