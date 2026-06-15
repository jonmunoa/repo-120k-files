// fichero 10193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10193;

Registro10193 crear_registro10193(int id) {
    Registro10193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
