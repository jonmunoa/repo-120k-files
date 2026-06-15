// fichero 3717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3717;

Registro3717 crear_registro3717(int id) {
    Registro3717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
