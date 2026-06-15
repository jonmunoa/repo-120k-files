// fichero 23097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23097;

Registro23097 crear_registro23097(int id) {
    Registro23097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
