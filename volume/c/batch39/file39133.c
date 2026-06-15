// fichero 39133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39133;

Registro39133 crear_registro39133(int id) {
    Registro39133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
