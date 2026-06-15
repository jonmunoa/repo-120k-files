// fichero 5269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5269;

Registro5269 crear_registro5269(int id) {
    Registro5269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
