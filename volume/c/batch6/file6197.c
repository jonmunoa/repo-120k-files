// fichero 6197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6197;

Registro6197 crear_registro6197(int id) {
    Registro6197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
