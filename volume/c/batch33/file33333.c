// fichero 33333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33333;

Registro33333 crear_registro33333(int id) {
    Registro33333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
