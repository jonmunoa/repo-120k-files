// fichero 35189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35189;

Registro35189 crear_registro35189(int id) {
    Registro35189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
