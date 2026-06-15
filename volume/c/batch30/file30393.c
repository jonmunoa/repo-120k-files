// fichero 30393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30393;

Registro30393 crear_registro30393(int id) {
    Registro30393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
