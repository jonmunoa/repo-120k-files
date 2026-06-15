// fichero 39957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39957;

Registro39957 crear_registro39957(int id) {
    Registro39957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
