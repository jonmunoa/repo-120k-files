// fichero 16101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16101;

Registro16101 crear_registro16101(int id) {
    Registro16101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
