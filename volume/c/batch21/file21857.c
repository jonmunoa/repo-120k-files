// fichero 21857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21857;

Registro21857 crear_registro21857(int id) {
    Registro21857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
