// fichero 47213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47213;

Registro47213 crear_registro47213(int id) {
    Registro47213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
