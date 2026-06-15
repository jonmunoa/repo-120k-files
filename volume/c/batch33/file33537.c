// fichero 33537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33537;

Registro33537 crear_registro33537(int id) {
    Registro33537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
