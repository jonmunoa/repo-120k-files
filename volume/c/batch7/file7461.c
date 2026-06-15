// fichero 7461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7461;

Registro7461 crear_registro7461(int id) {
    Registro7461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
