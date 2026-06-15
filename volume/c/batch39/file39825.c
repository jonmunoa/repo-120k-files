// fichero 39825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39825;

Registro39825 crear_registro39825(int id) {
    Registro39825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
