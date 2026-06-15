// fichero 7705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7705;

Registro7705 crear_registro7705(int id) {
    Registro7705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
