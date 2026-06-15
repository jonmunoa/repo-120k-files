// fichero 27361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27361;

Registro27361 crear_registro27361(int id) {
    Registro27361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
