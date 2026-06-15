// fichero 31013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31013;

Registro31013 crear_registro31013(int id) {
    Registro31013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
