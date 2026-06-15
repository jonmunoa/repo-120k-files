// fichero 5421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5421;

Registro5421 crear_registro5421(int id) {
    Registro5421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
