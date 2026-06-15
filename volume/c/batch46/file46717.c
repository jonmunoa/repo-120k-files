// fichero 46717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46717;

Registro46717 crear_registro46717(int id) {
    Registro46717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
