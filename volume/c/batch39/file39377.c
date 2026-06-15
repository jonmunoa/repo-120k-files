// fichero 39377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39377;

Registro39377 crear_registro39377(int id) {
    Registro39377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
