// fichero 5377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5377;

Registro5377 crear_registro5377(int id) {
    Registro5377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
