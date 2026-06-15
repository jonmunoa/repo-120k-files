// fichero 23609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23609;

Registro23609 crear_registro23609(int id) {
    Registro23609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
