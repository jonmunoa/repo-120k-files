// fichero 19529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19529;

Registro19529 crear_registro19529(int id) {
    Registro19529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
