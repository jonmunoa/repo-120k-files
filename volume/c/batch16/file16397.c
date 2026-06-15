// fichero 16397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16397;

Registro16397 crear_registro16397(int id) {
    Registro16397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
