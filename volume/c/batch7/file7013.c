// fichero 7013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7013;

Registro7013 crear_registro7013(int id) {
    Registro7013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
