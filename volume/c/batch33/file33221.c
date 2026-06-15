// fichero 33221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33221;

Registro33221 crear_registro33221(int id) {
    Registro33221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
