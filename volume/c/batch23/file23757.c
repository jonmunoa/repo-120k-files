// fichero 23757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23757;

Registro23757 crear_registro23757(int id) {
    Registro23757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
