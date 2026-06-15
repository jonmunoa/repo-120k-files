// fichero 12477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12477;

Registro12477 crear_registro12477(int id) {
    Registro12477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
