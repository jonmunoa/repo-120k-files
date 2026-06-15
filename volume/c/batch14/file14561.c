// fichero 14561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14561;

Registro14561 crear_registro14561(int id) {
    Registro14561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
