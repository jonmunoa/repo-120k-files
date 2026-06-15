// fichero 24921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24921;

Registro24921 crear_registro24921(int id) {
    Registro24921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
