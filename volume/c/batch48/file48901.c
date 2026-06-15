// fichero 48901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48901;

Registro48901 crear_registro48901(int id) {
    Registro48901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
