// fichero 21625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21625;

Registro21625 crear_registro21625(int id) {
    Registro21625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
