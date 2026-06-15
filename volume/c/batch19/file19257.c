// fichero 19257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19257;

Registro19257 crear_registro19257(int id) {
    Registro19257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
