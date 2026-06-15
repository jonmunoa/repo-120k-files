// fichero 48429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48429;

Registro48429 crear_registro48429(int id) {
    Registro48429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
