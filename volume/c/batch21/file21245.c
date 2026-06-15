// fichero 21245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21245;

Registro21245 crear_registro21245(int id) {
    Registro21245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
