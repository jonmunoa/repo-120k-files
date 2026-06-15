// fichero 8393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8393;

Registro8393 crear_registro8393(int id) {
    Registro8393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
