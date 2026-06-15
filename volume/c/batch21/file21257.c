// fichero 21257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21257;

Registro21257 crear_registro21257(int id) {
    Registro21257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
