// fichero 27273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27273;

Registro27273 crear_registro27273(int id) {
    Registro27273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
