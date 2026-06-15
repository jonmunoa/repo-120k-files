// fichero 49133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49133;

Registro49133 crear_registro49133(int id) {
    Registro49133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
