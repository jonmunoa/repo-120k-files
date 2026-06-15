// fichero 11437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11437;

Registro11437 crear_registro11437(int id) {
    Registro11437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
