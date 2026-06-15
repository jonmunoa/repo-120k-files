// fichero 20561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20561;

Registro20561 crear_registro20561(int id) {
    Registro20561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
