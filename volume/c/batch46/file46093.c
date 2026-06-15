// fichero 46093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46093;

Registro46093 crear_registro46093(int id) {
    Registro46093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
