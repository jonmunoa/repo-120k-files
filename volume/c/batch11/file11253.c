// fichero 11253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11253;

Registro11253 crear_registro11253(int id) {
    Registro11253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
