// fichero 39289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39289;

Registro39289 crear_registro39289(int id) {
    Registro39289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
