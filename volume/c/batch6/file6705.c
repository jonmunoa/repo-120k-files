// fichero 6705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6705;

Registro6705 crear_registro6705(int id) {
    Registro6705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
