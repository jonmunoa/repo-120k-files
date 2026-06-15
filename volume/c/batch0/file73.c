// fichero 73 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro73;

Registro73 crear_registro73(int id) {
    Registro73 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
