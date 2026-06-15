// fichero 7929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7929;

Registro7929 crear_registro7929(int id) {
    Registro7929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
