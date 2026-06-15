// fichero 5185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5185;

Registro5185 crear_registro5185(int id) {
    Registro5185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
