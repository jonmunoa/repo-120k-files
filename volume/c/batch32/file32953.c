// fichero 32953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32953;

Registro32953 crear_registro32953(int id) {
    Registro32953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
