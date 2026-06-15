// fichero 39017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39017;

Registro39017 crear_registro39017(int id) {
    Registro39017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
