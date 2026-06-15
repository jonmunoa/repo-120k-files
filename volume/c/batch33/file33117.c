// fichero 33117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33117;

Registro33117 crear_registro33117(int id) {
    Registro33117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
