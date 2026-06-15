// fichero 717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro717;

Registro717 crear_registro717(int id) {
    Registro717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
