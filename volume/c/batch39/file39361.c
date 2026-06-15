// fichero 39361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39361;

Registro39361 crear_registro39361(int id) {
    Registro39361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
