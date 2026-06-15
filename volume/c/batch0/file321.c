// fichero 321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro321;

Registro321 crear_registro321(int id) {
    Registro321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
