// fichero 8173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8173;

Registro8173 crear_registro8173(int id) {
    Registro8173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
