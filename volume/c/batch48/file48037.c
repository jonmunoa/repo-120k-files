// fichero 48037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48037;

Registro48037 crear_registro48037(int id) {
    Registro48037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
