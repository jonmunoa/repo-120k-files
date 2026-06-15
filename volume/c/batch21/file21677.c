// fichero 21677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21677;

Registro21677 crear_registro21677(int id) {
    Registro21677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
