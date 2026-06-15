// fichero 27593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27593;

Registro27593 crear_registro27593(int id) {
    Registro27593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
