// fichero 4021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4021;

Registro4021 crear_registro4021(int id) {
    Registro4021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
