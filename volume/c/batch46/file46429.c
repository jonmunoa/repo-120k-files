// fichero 46429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46429;

Registro46429 crear_registro46429(int id) {
    Registro46429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
