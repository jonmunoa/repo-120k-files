// fichero 5325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5325;

Registro5325 crear_registro5325(int id) {
    Registro5325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
