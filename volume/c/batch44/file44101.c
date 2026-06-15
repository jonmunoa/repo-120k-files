// fichero 44101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44101;

Registro44101 crear_registro44101(int id) {
    Registro44101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
