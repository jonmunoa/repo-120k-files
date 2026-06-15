// fichero 27373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27373;

Registro27373 crear_registro27373(int id) {
    Registro27373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
