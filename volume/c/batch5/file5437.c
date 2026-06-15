// fichero 5437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5437;

Registro5437 crear_registro5437(int id) {
    Registro5437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
