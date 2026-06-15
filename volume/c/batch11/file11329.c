// fichero 11329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11329;

Registro11329 crear_registro11329(int id) {
    Registro11329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
