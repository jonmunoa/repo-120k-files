// fichero 23397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23397;

Registro23397 crear_registro23397(int id) {
    Registro23397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
