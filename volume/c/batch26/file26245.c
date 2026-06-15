// fichero 26245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26245;

Registro26245 crear_registro26245(int id) {
    Registro26245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
