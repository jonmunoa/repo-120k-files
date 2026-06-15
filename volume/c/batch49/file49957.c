// fichero 49957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49957;

Registro49957 crear_registro49957(int id) {
    Registro49957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
