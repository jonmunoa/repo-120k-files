// fichero 44561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44561;

Registro44561 crear_registro44561(int id) {
    Registro44561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
