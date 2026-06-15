// fichero 11141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11141;

Registro11141 crear_registro11141(int id) {
    Registro11141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
