// fichero 5725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5725;

Registro5725 crear_registro5725(int id) {
    Registro5725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
