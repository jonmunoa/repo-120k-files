// fichero 39885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39885;

Registro39885 crear_registro39885(int id) {
    Registro39885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
