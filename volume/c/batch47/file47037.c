// fichero 47037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47037;

Registro47037 crear_registro47037(int id) {
    Registro47037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
