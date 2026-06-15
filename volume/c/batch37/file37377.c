// fichero 37377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37377;

Registro37377 crear_registro37377(int id) {
    Registro37377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
