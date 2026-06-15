// fichero 23717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23717;

Registro23717 crear_registro23717(int id) {
    Registro23717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
