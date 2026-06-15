// fichero 48233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48233;

Registro48233 crear_registro48233(int id) {
    Registro48233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
