// fichero 4949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4949;

Registro4949 crear_registro4949(int id) {
    Registro4949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
