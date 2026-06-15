// fichero 16721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16721;

Registro16721 crear_registro16721(int id) {
    Registro16721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
