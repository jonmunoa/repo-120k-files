// fichero 23709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23709;

Registro23709 crear_registro23709(int id) {
    Registro23709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
