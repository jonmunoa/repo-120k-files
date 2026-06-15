// fichero 6597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6597;

Registro6597 crear_registro6597(int id) {
    Registro6597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
