// fichero 49373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49373;

Registro49373 crear_registro49373(int id) {
    Registro49373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
