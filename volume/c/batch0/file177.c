// fichero 177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro177;

Registro177 crear_registro177(int id) {
    Registro177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
