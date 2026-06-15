// fichero 43793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43793;

Registro43793 crear_registro43793(int id) {
    Registro43793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
