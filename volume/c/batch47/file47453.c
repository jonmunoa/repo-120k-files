// fichero 47453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47453;

Registro47453 crear_registro47453(int id) {
    Registro47453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
