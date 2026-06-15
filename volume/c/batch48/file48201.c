// fichero 48201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48201;

Registro48201 crear_registro48201(int id) {
    Registro48201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
