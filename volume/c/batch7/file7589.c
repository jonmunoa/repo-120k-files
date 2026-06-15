// fichero 7589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7589;

Registro7589 crear_registro7589(int id) {
    Registro7589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
