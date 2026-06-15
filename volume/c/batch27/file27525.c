// fichero 27525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27525;

Registro27525 crear_registro27525(int id) {
    Registro27525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
