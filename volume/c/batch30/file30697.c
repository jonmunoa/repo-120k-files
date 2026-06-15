// fichero 30697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30697;

Registro30697 crear_registro30697(int id) {
    Registro30697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
