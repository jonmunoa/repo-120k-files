// fichero 18749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18749;

Registro18749 crear_registro18749(int id) {
    Registro18749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
