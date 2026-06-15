// fichero 27717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27717;

Registro27717 crear_registro27717(int id) {
    Registro27717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
