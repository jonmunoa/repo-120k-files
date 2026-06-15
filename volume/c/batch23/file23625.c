// fichero 23625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23625;

Registro23625 crear_registro23625(int id) {
    Registro23625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
