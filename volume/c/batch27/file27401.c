// fichero 27401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27401;

Registro27401 crear_registro27401(int id) {
    Registro27401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
