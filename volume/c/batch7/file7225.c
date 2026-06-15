// fichero 7225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7225;

Registro7225 crear_registro7225(int id) {
    Registro7225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
