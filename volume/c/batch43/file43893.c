// fichero 43893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43893;

Registro43893 crear_registro43893(int id) {
    Registro43893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
