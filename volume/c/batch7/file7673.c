// fichero 7673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7673;

Registro7673 crear_registro7673(int id) {
    Registro7673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
