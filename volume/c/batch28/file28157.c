// fichero 28157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28157;

Registro28157 crear_registro28157(int id) {
    Registro28157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
