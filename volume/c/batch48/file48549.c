// fichero 48549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48549;

Registro48549 crear_registro48549(int id) {
    Registro48549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
