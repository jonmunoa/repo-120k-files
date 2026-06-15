// fichero 30133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30133;

Registro30133 crear_registro30133(int id) {
    Registro30133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
