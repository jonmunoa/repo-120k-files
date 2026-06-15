// fichero 23729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23729;

Registro23729 crear_registro23729(int id) {
    Registro23729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
