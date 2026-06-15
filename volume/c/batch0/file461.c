// fichero 461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro461;

Registro461 crear_registro461(int id) {
    Registro461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
