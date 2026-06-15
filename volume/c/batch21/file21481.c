// fichero 21481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21481;

Registro21481 crear_registro21481(int id) {
    Registro21481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
