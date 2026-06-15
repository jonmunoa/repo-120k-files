// fichero 5245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5245;

Registro5245 crear_registro5245(int id) {
    Registro5245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
