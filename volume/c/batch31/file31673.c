// fichero 31673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31673;

Registro31673 crear_registro31673(int id) {
    Registro31673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
