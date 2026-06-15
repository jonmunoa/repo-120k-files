// fichero 19589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19589;

Registro19589 crear_registro19589(int id) {
    Registro19589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
