// fichero 16549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16549;

Registro16549 crear_registro16549(int id) {
    Registro16549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
