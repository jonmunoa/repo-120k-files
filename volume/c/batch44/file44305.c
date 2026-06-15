// fichero 44305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44305;

Registro44305 crear_registro44305(int id) {
    Registro44305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
