// fichero 23369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23369;

Registro23369 crear_registro23369(int id) {
    Registro23369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
