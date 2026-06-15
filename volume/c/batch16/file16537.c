// fichero 16537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16537;

Registro16537 crear_registro16537(int id) {
    Registro16537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
