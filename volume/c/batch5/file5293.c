// fichero 5293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5293;

Registro5293 crear_registro5293(int id) {
    Registro5293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
