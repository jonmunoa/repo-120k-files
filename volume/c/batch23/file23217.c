// fichero 23217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23217;

Registro23217 crear_registro23217(int id) {
    Registro23217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
