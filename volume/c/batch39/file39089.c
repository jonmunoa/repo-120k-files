// fichero 39089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39089;

Registro39089 crear_registro39089(int id) {
    Registro39089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
