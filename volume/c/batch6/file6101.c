// fichero 6101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6101;

Registro6101 crear_registro6101(int id) {
    Registro6101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
