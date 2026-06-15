// fichero 8133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8133;

Registro8133 crear_registro8133(int id) {
    Registro8133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
