// fichero 47321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47321;

Registro47321 crear_registro47321(int id) {
    Registro47321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
