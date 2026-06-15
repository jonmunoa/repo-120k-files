// fichero 33561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33561;

Registro33561 crear_registro33561(int id) {
    Registro33561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
