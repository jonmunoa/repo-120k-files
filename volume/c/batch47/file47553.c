// fichero 47553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47553;

Registro47553 crear_registro47553(int id) {
    Registro47553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
