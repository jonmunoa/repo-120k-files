// fichero 33953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33953;

Registro33953 crear_registro33953(int id) {
    Registro33953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
