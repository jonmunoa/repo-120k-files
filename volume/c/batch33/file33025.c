// fichero 33025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33025;

Registro33025 crear_registro33025(int id) {
    Registro33025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
