// fichero 1589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1589;

Registro1589 crear_registro1589(int id) {
    Registro1589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
