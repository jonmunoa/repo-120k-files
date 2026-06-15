// fichero 10165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10165;

Registro10165 crear_registro10165(int id) {
    Registro10165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
