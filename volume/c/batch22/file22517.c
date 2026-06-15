// fichero 22517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22517;

Registro22517 crear_registro22517(int id) {
    Registro22517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
