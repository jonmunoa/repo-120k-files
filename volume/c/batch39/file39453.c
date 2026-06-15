// fichero 39453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39453;

Registro39453 crear_registro39453(int id) {
    Registro39453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
