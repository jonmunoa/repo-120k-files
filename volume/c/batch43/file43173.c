// fichero 43173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43173;

Registro43173 crear_registro43173(int id) {
    Registro43173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
