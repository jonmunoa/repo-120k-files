// fichero 23489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23489;

Registro23489 crear_registro23489(int id) {
    Registro23489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
