// fichero 11029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11029;

Registro11029 crear_registro11029(int id) {
    Registro11029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
