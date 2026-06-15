// fichero 11213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11213;

Registro11213 crear_registro11213(int id) {
    Registro11213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
