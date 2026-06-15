// fichero 23357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23357;

Registro23357 crear_registro23357(int id) {
    Registro23357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
