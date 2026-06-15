// fichero 48953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48953;

Registro48953 crear_registro48953(int id) {
    Registro48953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
