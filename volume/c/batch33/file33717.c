// fichero 33717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33717;

Registro33717 crear_registro33717(int id) {
    Registro33717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
