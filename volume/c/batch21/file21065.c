// fichero 21065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21065;

Registro21065 crear_registro21065(int id) {
    Registro21065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
