// fichero 39593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39593;

Registro39593 crear_registro39593(int id) {
    Registro39593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
