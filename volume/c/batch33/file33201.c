// fichero 33201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33201;

Registro33201 crear_registro33201(int id) {
    Registro33201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
