// fichero 5217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5217;

Registro5217 crear_registro5217(int id) {
    Registro5217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
