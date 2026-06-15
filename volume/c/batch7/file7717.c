// fichero 7717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7717;

Registro7717 crear_registro7717(int id) {
    Registro7717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
