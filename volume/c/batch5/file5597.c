// fichero 5597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5597;

Registro5597 crear_registro5597(int id) {
    Registro5597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
