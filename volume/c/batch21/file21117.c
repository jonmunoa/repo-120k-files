// fichero 21117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21117;

Registro21117 crear_registro21117(int id) {
    Registro21117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
