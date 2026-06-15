// fichero 23861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23861;

Registro23861 crear_registro23861(int id) {
    Registro23861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
