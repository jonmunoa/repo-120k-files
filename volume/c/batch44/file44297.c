// fichero 44297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44297;

Registro44297 crear_registro44297(int id) {
    Registro44297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
