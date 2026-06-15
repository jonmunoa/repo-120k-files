// fichero 47317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47317;

Registro47317 crear_registro47317(int id) {
    Registro47317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
