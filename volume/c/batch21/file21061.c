// fichero 21061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21061;

Registro21061 crear_registro21061(int id) {
    Registro21061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
