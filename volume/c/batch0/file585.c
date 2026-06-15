// fichero 585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro585;

Registro585 crear_registro585(int id) {
    Registro585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
