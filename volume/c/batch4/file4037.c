// fichero 4037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4037;

Registro4037 crear_registro4037(int id) {
    Registro4037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
