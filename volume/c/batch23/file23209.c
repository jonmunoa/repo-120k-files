// fichero 23209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23209;

Registro23209 crear_registro23209(int id) {
    Registro23209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
