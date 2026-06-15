// fichero 43385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43385;

Registro43385 crear_registro43385(int id) {
    Registro43385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
