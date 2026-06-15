// fichero 32077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32077;

Registro32077 crear_registro32077(int id) {
    Registro32077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
