// fichero 34297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34297;

Registro34297 crear_registro34297(int id) {
    Registro34297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
