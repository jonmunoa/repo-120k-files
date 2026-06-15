// fichero 9297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9297;

Registro9297 crear_registro9297(int id) {
    Registro9297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
