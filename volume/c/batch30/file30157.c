// fichero 30157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30157;

Registro30157 crear_registro30157(int id) {
    Registro30157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
