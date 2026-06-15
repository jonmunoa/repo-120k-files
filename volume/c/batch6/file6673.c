// fichero 6673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6673;

Registro6673 crear_registro6673(int id) {
    Registro6673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
