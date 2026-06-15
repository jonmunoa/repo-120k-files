// fichero 18725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18725;

Registro18725 crear_registro18725(int id) {
    Registro18725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
