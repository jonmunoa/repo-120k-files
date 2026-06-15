// fichero 33505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33505;

Registro33505 crear_registro33505(int id) {
    Registro33505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
