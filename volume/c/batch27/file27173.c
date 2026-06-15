// fichero 27173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27173;

Registro27173 crear_registro27173(int id) {
    Registro27173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
