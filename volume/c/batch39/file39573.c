// fichero 39573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39573;

Registro39573 crear_registro39573(int id) {
    Registro39573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
