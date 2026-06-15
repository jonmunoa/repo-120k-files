// fichero 33661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33661;

Registro33661 crear_registro33661(int id) {
    Registro33661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
