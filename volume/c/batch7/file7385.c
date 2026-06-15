// fichero 7385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7385;

Registro7385 crear_registro7385(int id) {
    Registro7385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
