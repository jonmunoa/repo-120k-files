// fichero 17725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17725;

Registro17725 crear_registro17725(int id) {
    Registro17725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
