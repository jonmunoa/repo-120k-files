// fichero 2045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2045;

Registro2045 crear_registro2045(int id) {
    Registro2045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
