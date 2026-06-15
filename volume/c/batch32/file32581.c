// fichero 32581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32581;

Registro32581 crear_registro32581(int id) {
    Registro32581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
