// fichero 49581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49581;

Registro49581 crear_registro49581(int id) {
    Registro49581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
