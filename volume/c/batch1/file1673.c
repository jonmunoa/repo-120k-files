// fichero 1673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1673;

Registro1673 crear_registro1673(int id) {
    Registro1673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
