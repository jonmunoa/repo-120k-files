// fichero 15081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15081;

Registro15081 crear_registro15081(int id) {
    Registro15081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
