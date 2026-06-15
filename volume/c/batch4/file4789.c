// fichero 4789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4789;

Registro4789 crear_registro4789(int id) {
    Registro4789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
