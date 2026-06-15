// fichero 35421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35421;

Registro35421 crear_registro35421(int id) {
    Registro35421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
