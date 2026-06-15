// fichero 23069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23069;

Registro23069 crear_registro23069(int id) {
    Registro23069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
