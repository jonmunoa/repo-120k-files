// fichero 11857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11857;

Registro11857 crear_registro11857(int id) {
    Registro11857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
