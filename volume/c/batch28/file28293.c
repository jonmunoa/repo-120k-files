// fichero 28293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28293;

Registro28293 crear_registro28293(int id) {
    Registro28293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
