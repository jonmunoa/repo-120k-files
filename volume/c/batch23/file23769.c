// fichero 23769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23769;

Registro23769 crear_registro23769(int id) {
    Registro23769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
