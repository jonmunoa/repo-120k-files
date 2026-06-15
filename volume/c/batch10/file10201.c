// fichero 10201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10201;

Registro10201 crear_registro10201(int id) {
    Registro10201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
