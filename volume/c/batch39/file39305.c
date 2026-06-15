// fichero 39305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39305;

Registro39305 crear_registro39305(int id) {
    Registro39305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
