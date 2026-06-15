// fichero 39601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39601;

Registro39601 crear_registro39601(int id) {
    Registro39601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
