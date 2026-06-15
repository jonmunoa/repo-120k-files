// fichero 20201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20201;

Registro20201 crear_registro20201(int id) {
    Registro20201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
