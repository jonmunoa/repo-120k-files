// fichero 49477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49477;

Registro49477 crear_registro49477(int id) {
    Registro49477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
