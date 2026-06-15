// fichero 31273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31273;

Registro31273 crear_registro31273(int id) {
    Registro31273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
