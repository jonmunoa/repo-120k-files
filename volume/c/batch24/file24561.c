// fichero 24561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24561;

Registro24561 crear_registro24561(int id) {
    Registro24561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
