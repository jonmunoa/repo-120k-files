// fichero 47665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47665;

Registro47665 crear_registro47665(int id) {
    Registro47665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
