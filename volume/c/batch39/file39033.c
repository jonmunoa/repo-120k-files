// fichero 39033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39033;

Registro39033 crear_registro39033(int id) {
    Registro39033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
