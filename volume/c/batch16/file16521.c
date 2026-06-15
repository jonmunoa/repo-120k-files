// fichero 16521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16521;

Registro16521 crear_registro16521(int id) {
    Registro16521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
