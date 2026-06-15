// fichero 17589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17589;

Registro17589 crear_registro17589(int id) {
    Registro17589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
