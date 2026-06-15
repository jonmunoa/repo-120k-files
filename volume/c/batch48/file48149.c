// fichero 48149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48149;

Registro48149 crear_registro48149(int id) {
    Registro48149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
