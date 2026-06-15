// fichero 43645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43645;

Registro43645 crear_registro43645(int id) {
    Registro43645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
