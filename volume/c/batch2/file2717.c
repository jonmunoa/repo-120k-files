// fichero 2717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2717;

Registro2717 crear_registro2717(int id) {
    Registro2717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
