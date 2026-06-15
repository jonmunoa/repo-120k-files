// fichero 44797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44797;

Registro44797 crear_registro44797(int id) {
    Registro44797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
