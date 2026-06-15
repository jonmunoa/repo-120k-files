// fichero 39301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39301;

Registro39301 crear_registro39301(int id) {
    Registro39301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
