// fichero 8297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8297;

Registro8297 crear_registro8297(int id) {
    Registro8297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
