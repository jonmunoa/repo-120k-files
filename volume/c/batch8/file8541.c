// fichero 8541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8541;

Registro8541 crear_registro8541(int id) {
    Registro8541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
