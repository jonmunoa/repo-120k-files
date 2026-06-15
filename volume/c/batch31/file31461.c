// fichero 31461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31461;

Registro31461 crear_registro31461(int id) {
    Registro31461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
