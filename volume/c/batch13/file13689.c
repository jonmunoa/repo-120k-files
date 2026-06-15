// fichero 13689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13689;

Registro13689 crear_registro13689(int id) {
    Registro13689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
