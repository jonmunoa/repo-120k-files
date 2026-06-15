// fichero 3481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3481;

Registro3481 crear_registro3481(int id) {
    Registro3481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
