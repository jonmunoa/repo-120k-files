// fichero 11305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11305;

Registro11305 crear_registro11305(int id) {
    Registro11305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
