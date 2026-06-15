// fichero 33605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33605;

Registro33605 crear_registro33605(int id) {
    Registro33605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
