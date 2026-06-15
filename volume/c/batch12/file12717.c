// fichero 12717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12717;

Registro12717 crear_registro12717(int id) {
    Registro12717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
