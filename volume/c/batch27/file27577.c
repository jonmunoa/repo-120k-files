// fichero 27577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27577;

Registro27577 crear_registro27577(int id) {
    Registro27577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
