// fichero 12337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12337;

Registro12337 crear_registro12337(int id) {
    Registro12337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
