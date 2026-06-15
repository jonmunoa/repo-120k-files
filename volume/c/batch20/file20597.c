// fichero 20597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20597;

Registro20597 crear_registro20597(int id) {
    Registro20597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
