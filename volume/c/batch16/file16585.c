// fichero 16585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16585;

Registro16585 crear_registro16585(int id) {
    Registro16585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
