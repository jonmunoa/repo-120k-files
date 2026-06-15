// fichero 6377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6377;

Registro6377 crear_registro6377(int id) {
    Registro6377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
