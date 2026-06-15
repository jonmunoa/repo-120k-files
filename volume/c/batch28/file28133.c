// fichero 28133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28133;

Registro28133 crear_registro28133(int id) {
    Registro28133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
