// fichero 24233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24233;

Registro24233 crear_registro24233(int id) {
    Registro24233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
