// fichero 19461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19461;

Registro19461 crear_registro19461(int id) {
    Registro19461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
