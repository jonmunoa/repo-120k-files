// fichero 32997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32997;

Registro32997 crear_registro32997(int id) {
    Registro32997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
