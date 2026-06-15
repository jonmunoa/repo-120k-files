// fichero 11441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11441;

Registro11441 crear_registro11441(int id) {
    Registro11441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
