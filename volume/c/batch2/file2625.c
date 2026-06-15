// fichero 2625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2625;

Registro2625 crear_registro2625(int id) {
    Registro2625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
