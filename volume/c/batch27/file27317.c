// fichero 27317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27317;

Registro27317 crear_registro27317(int id) {
    Registro27317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
