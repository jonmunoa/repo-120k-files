// fichero 27089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27089;

Registro27089 crear_registro27089(int id) {
    Registro27089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
