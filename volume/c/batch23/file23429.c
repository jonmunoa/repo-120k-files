// fichero 23429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23429;

Registro23429 crear_registro23429(int id) {
    Registro23429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
