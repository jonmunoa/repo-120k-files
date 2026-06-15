// fichero 31589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31589;

Registro31589 crear_registro31589(int id) {
    Registro31589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
