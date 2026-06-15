// fichero 32373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32373;

Registro32373 crear_registro32373(int id) {
    Registro32373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
