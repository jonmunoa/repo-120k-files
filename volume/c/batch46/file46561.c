// fichero 46561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46561;

Registro46561 crear_registro46561(int id) {
    Registro46561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
