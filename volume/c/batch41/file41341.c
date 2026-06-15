// fichero 41341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41341;

Registro41341 crear_registro41341(int id) {
    Registro41341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
