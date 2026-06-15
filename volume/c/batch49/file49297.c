// fichero 49297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49297;

Registro49297 crear_registro49297(int id) {
    Registro49297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
