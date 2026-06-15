// fichero 23105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23105;

Registro23105 crear_registro23105(int id) {
    Registro23105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
