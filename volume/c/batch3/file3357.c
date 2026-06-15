// fichero 3357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3357;

Registro3357 crear_registro3357(int id) {
    Registro3357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
