// fichero 23233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23233;

Registro23233 crear_registro23233(int id) {
    Registro23233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
