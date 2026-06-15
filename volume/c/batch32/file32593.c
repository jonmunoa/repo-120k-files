// fichero 32593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32593;

Registro32593 crear_registro32593(int id) {
    Registro32593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
