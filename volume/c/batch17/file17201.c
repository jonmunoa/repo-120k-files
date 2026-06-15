// fichero 17201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17201;

Registro17201 crear_registro17201(int id) {
    Registro17201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
