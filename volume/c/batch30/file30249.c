// fichero 30249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30249;

Registro30249 crear_registro30249(int id) {
    Registro30249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
