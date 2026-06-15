// fichero 18133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18133;

Registro18133 crear_registro18133(int id) {
    Registro18133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
