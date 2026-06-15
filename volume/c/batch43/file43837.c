// fichero 43837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43837;

Registro43837 crear_registro43837(int id) {
    Registro43837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
