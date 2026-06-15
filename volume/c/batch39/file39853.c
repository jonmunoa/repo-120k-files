// fichero 39853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39853;

Registro39853 crear_registro39853(int id) {
    Registro39853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
