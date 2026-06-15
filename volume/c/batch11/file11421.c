// fichero 11421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11421;

Registro11421 crear_registro11421(int id) {
    Registro11421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
