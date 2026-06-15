// fichero 26717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26717;

Registro26717 crear_registro26717(int id) {
    Registro26717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
