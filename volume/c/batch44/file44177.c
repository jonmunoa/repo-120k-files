// fichero 44177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44177;

Registro44177 crear_registro44177(int id) {
    Registro44177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
