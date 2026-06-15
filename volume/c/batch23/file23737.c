// fichero 23737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23737;

Registro23737 crear_registro23737(int id) {
    Registro23737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
