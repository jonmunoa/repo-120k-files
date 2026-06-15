// fichero 38561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38561;

Registro38561 crear_registro38561(int id) {
    Registro38561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
