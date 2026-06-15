// fichero 7285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7285;

Registro7285 crear_registro7285(int id) {
    Registro7285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
