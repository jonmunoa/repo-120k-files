// fichero 43957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43957;

Registro43957 crear_registro43957(int id) {
    Registro43957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
