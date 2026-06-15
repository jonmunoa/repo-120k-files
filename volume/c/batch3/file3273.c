// fichero 3273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3273;

Registro3273 crear_registro3273(int id) {
    Registro3273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
