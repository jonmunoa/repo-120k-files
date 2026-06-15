// fichero 6329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6329;

Registro6329 crear_registro6329(int id) {
    Registro6329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
