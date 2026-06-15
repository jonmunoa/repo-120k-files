// fichero 33237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33237;

Registro33237 crear_registro33237(int id) {
    Registro33237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
