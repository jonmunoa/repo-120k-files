// fichero 48173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48173;

Registro48173 crear_registro48173(int id) {
    Registro48173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
