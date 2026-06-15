// fichero 39161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39161;

Registro39161 crear_registro39161(int id) {
    Registro39161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
