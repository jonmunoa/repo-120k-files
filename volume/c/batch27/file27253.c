// fichero 27253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27253;

Registro27253 crear_registro27253(int id) {
    Registro27253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
