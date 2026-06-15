// fichero 505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro505;

Registro505 crear_registro505(int id) {
    Registro505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
