// fichero 12473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12473;

Registro12473 crear_registro12473(int id) {
    Registro12473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
