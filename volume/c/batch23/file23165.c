// fichero 23165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23165;

Registro23165 crear_registro23165(int id) {
    Registro23165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
