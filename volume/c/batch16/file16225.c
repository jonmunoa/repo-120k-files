// fichero 16225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16225;

Registro16225 crear_registro16225(int id) {
    Registro16225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
