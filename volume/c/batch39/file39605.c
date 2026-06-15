// fichero 39605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39605;

Registro39605 crear_registro39605(int id) {
    Registro39605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
