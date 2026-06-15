// fichero 37573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37573;

Registro37573 crear_registro37573(int id) {
    Registro37573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
