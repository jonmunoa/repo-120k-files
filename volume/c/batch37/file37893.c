// fichero 37893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37893;

Registro37893 crear_registro37893(int id) {
    Registro37893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
