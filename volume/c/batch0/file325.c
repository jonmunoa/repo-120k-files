// fichero 325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro325;

Registro325 crear_registro325(int id) {
    Registro325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
