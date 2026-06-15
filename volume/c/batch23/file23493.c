// fichero 23493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23493;

Registro23493 crear_registro23493(int id) {
    Registro23493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
