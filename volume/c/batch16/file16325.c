// fichero 16325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16325;

Registro16325 crear_registro16325(int id) {
    Registro16325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
