// fichero 17033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17033;

Registro17033 crear_registro17033(int id) {
    Registro17033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
