// fichero 7417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7417;

Registro7417 crear_registro7417(int id) {
    Registro7417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
