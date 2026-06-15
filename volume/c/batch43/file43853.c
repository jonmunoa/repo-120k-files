// fichero 43853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43853;

Registro43853 crear_registro43853(int id) {
    Registro43853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
