// fichero 11521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11521;

Registro11521 crear_registro11521(int id) {
    Registro11521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
