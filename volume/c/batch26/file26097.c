// fichero 26097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26097;

Registro26097 crear_registro26097(int id) {
    Registro26097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
