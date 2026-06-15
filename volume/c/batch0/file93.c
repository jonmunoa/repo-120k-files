// fichero 93 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro93;

Registro93 crear_registro93(int id) {
    Registro93 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
