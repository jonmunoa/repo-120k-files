// fichero 16593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16593;

Registro16593 crear_registro16593(int id) {
    Registro16593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
