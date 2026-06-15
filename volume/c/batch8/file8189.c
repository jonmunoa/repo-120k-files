// fichero 8189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8189;

Registro8189 crear_registro8189(int id) {
    Registro8189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
