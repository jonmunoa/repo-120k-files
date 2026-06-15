// fichero 26657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26657;

Registro26657 crear_registro26657(int id) {
    Registro26657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
