// fichero 11713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11713;

Registro11713 crear_registro11713(int id) {
    Registro11713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
