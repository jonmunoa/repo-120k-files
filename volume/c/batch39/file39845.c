// fichero 39845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39845;

Registro39845 crear_registro39845(int id) {
    Registro39845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
