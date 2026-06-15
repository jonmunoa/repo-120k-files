// fichero 14581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14581;

Registro14581 crear_registro14581(int id) {
    Registro14581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
