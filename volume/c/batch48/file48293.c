// fichero 48293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48293;

Registro48293 crear_registro48293(int id) {
    Registro48293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
