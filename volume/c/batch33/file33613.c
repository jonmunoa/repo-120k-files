// fichero 33613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33613;

Registro33613 crear_registro33613(int id) {
    Registro33613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
