// fichero 4033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4033;

Registro4033 crear_registro4033(int id) {
    Registro4033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
