// fichero 8049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8049;

Registro8049 crear_registro8049(int id) {
    Registro8049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
