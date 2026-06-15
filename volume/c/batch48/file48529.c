// fichero 48529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48529;

Registro48529 crear_registro48529(int id) {
    Registro48529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
