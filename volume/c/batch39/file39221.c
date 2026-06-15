// fichero 39221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39221;

Registro39221 crear_registro39221(int id) {
    Registro39221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
