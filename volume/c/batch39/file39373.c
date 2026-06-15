// fichero 39373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39373;

Registro39373 crear_registro39373(int id) {
    Registro39373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
