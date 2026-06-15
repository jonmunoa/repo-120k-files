// fichero 45325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45325;

Registro45325 crear_registro45325(int id) {
    Registro45325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
