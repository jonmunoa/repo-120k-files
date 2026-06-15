// fichero 45717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45717;

Registro45717 crear_registro45717(int id) {
    Registro45717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
