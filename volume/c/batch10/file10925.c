// fichero 10925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10925;

Registro10925 crear_registro10925(int id) {
    Registro10925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
