// fichero 39765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39765;

Registro39765 crear_registro39765(int id) {
    Registro39765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
