// fichero 11077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11077;

Registro11077 crear_registro11077(int id) {
    Registro11077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
