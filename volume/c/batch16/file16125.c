// fichero 16125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16125;

Registro16125 crear_registro16125(int id) {
    Registro16125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
