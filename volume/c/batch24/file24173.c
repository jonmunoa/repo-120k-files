// fichero 24173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24173;

Registro24173 crear_registro24173(int id) {
    Registro24173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
