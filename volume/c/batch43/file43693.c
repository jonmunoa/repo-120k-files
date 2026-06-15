// fichero 43693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43693;

Registro43693 crear_registro43693(int id) {
    Registro43693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
