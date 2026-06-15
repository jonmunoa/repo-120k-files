// fichero 7349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7349;

Registro7349 crear_registro7349(int id) {
    Registro7349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
