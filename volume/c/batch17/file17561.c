// fichero 17561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17561;

Registro17561 crear_registro17561(int id) {
    Registro17561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
