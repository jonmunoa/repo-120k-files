// fichero 21321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21321;

Registro21321 crear_registro21321(int id) {
    Registro21321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
