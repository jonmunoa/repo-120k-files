// fichero 47385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47385;

Registro47385 crear_registro47385(int id) {
    Registro47385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
