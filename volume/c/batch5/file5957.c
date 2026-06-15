// fichero 5957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5957;

Registro5957 crear_registro5957(int id) {
    Registro5957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
