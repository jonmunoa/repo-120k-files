// fichero 17397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17397;

Registro17397 crear_registro17397(int id) {
    Registro17397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
