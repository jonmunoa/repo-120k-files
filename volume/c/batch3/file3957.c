// fichero 3957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3957;

Registro3957 crear_registro3957(int id) {
    Registro3957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
