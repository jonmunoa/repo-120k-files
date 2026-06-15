// fichero 5921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5921;

Registro5921 crear_registro5921(int id) {
    Registro5921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
