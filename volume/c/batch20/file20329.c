// fichero 20329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20329;

Registro20329 crear_registro20329(int id) {
    Registro20329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
