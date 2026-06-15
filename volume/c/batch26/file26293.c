// fichero 26293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26293;

Registro26293 crear_registro26293(int id) {
    Registro26293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
