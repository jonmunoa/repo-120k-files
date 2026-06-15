// fichero 19273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19273;

Registro19273 crear_registro19273(int id) {
    Registro19273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
