// fichero 23305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23305;

Registro23305 crear_registro23305(int id) {
    Registro23305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
