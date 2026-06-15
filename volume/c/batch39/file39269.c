// fichero 39269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39269;

Registro39269 crear_registro39269(int id) {
    Registro39269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
