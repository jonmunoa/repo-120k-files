// fichero 15077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15077;

Registro15077 crear_registro15077(int id) {
    Registro15077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
