// fichero 20325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20325;

Registro20325 crear_registro20325(int id) {
    Registro20325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
