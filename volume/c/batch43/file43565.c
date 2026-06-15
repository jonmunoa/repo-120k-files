// fichero 43565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43565;

Registro43565 crear_registro43565(int id) {
    Registro43565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
