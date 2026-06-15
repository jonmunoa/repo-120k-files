// fichero 26473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26473;

Registro26473 crear_registro26473(int id) {
    Registro26473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
