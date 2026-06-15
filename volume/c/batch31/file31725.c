// fichero 31725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31725;

Registro31725 crear_registro31725(int id) {
    Registro31725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
