// fichero 38325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38325;

Registro38325 crear_registro38325(int id) {
    Registro38325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
