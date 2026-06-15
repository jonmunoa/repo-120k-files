// fichero 23593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23593;

Registro23593 crear_registro23593(int id) {
    Registro23593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
