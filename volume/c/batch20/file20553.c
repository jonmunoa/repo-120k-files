// fichero 20553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20553;

Registro20553 crear_registro20553(int id) {
    Registro20553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
