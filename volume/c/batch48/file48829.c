// fichero 48829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48829;

Registro48829 crear_registro48829(int id) {
    Registro48829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
