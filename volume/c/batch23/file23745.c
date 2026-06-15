// fichero 23745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23745;

Registro23745 crear_registro23745(int id) {
    Registro23745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
