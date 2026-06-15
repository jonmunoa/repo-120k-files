// fichero 18441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18441;

Registro18441 crear_registro18441(int id) {
    Registro18441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
