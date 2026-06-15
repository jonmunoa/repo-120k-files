// fichero 19341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19341;

Registro19341 crear_registro19341(int id) {
    Registro19341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
