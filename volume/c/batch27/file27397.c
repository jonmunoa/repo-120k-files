// fichero 27397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27397;

Registro27397 crear_registro27397(int id) {
    Registro27397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
