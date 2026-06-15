// fichero 27257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27257;

Registro27257 crear_registro27257(int id) {
    Registro27257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
