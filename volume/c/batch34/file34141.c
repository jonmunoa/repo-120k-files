// fichero 34141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34141;

Registro34141 crear_registro34141(int id) {
    Registro34141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
