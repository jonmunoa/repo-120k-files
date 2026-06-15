// fichero 7321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7321;

Registro7321 crear_registro7321(int id) {
    Registro7321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
