// fichero 23741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23741;

Registro23741 crear_registro23741(int id) {
    Registro23741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
