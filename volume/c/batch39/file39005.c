// fichero 39005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39005;

Registro39005 crear_registro39005(int id) {
    Registro39005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
