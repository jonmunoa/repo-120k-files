// fichero 11105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11105;

Registro11105 crear_registro11105(int id) {
    Registro11105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
