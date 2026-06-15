// fichero 28089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28089;

Registro28089 crear_registro28089(int id) {
    Registro28089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
