// fichero 21413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21413;

Registro21413 crear_registro21413(int id) {
    Registro21413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
