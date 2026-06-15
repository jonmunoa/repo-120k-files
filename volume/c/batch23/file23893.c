// fichero 23893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23893;

Registro23893 crear_registro23893(int id) {
    Registro23893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
