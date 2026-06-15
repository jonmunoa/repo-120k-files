// fichero 11217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11217;

Registro11217 crear_registro11217(int id) {
    Registro11217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
