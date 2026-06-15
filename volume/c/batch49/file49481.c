// fichero 49481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49481;

Registro49481 crear_registro49481(int id) {
    Registro49481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
