// fichero 19377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19377;

Registro19377 crear_registro19377(int id) {
    Registro19377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
