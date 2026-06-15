// fichero 397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro397;

Registro397 crear_registro397(int id) {
    Registro397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
