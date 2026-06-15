// fichero 23001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23001;

Registro23001 crear_registro23001(int id) {
    Registro23001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
