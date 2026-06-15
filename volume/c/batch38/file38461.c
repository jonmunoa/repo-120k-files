// fichero 38461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38461;

Registro38461 crear_registro38461(int id) {
    Registro38461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
