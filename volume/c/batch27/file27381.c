// fichero 27381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27381;

Registro27381 crear_registro27381(int id) {
    Registro27381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
