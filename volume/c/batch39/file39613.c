// fichero 39613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39613;

Registro39613 crear_registro39613(int id) {
    Registro39613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
