// fichero 21453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21453;

Registro21453 crear_registro21453(int id) {
    Registro21453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
