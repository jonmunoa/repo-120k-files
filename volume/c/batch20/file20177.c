// fichero 20177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20177;

Registro20177 crear_registro20177(int id) {
    Registro20177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
