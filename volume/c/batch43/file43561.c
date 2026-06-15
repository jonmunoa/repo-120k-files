// fichero 43561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43561;

Registro43561 crear_registro43561(int id) {
    Registro43561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
