// fichero 12825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12825;

Registro12825 crear_registro12825(int id) {
    Registro12825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
