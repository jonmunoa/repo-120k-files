// fichero 2725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2725;

Registro2725 crear_registro2725(int id) {
    Registro2725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
