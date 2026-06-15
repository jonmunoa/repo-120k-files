// fichero 2433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2433;

Registro2433 crear_registro2433(int id) {
    Registro2433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
