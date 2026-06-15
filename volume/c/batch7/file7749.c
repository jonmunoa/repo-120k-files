// fichero 7749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7749;

Registro7749 crear_registro7749(int id) {
    Registro7749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
