// fichero 23665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23665;

Registro23665 crear_registro23665(int id) {
    Registro23665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
