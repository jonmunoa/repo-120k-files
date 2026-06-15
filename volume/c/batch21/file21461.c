// fichero 21461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21461;

Registro21461 crear_registro21461(int id) {
    Registro21461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
