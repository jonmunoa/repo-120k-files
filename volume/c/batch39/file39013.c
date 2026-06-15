// fichero 39013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39013;

Registro39013 crear_registro39013(int id) {
    Registro39013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
