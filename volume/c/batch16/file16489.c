// fichero 16489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16489;

Registro16489 crear_registro16489(int id) {
    Registro16489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
