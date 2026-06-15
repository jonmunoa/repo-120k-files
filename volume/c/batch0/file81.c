// fichero 81 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro81;

Registro81 crear_registro81(int id) {
    Registro81 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
