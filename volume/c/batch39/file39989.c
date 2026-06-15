// fichero 39989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39989;

Registro39989 crear_registro39989(int id) {
    Registro39989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
