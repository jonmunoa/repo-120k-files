// fichero 33665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33665;

Registro33665 crear_registro33665(int id) {
    Registro33665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
