// fichero 11157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11157;

Registro11157 crear_registro11157(int id) {
    Registro11157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
