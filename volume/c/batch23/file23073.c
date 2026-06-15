// fichero 23073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23073;

Registro23073 crear_registro23073(int id) {
    Registro23073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
