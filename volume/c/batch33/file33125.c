// fichero 33125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33125;

Registro33125 crear_registro33125(int id) {
    Registro33125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
