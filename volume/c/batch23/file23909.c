// fichero 23909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23909;

Registro23909 crear_registro23909(int id) {
    Registro23909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
