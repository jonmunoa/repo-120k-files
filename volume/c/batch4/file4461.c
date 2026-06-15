// fichero 4461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4461;

Registro4461 crear_registro4461(int id) {
    Registro4461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
