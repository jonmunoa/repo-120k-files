// fichero 23389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23389;

Registro23389 crear_registro23389(int id) {
    Registro23389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
