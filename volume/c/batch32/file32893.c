// fichero 32893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32893;

Registro32893 crear_registro32893(int id) {
    Registro32893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
