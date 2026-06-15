// fichero 7357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7357;

Registro7357 crear_registro7357(int id) {
    Registro7357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
