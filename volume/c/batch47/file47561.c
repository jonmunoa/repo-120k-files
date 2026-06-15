// fichero 47561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47561;

Registro47561 crear_registro47561(int id) {
    Registro47561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
