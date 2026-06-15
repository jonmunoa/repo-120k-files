// fichero 48717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48717;

Registro48717 crear_registro48717(int id) {
    Registro48717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
