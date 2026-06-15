// fichero 45653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45653;

Registro45653 crear_registro45653(int id) {
    Registro45653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
