// fichero 6629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6629;

Registro6629 crear_registro6629(int id) {
    Registro6629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
