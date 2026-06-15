// fichero 43425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43425;

Registro43425 crear_registro43425(int id) {
    Registro43425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
