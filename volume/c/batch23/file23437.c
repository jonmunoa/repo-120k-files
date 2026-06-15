// fichero 23437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23437;

Registro23437 crear_registro23437(int id) {
    Registro23437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
