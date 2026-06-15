// fichero 33309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33309;

Registro33309 crear_registro33309(int id) {
    Registro33309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
