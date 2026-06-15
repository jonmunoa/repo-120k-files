// fichero 47673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47673;

Registro47673 crear_registro47673(int id) {
    Registro47673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
