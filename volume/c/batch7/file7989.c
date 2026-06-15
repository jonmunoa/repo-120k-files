// fichero 7989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7989;

Registro7989 crear_registro7989(int id) {
    Registro7989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
