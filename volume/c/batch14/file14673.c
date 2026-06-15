// fichero 14673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14673;

Registro14673 crear_registro14673(int id) {
    Registro14673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
