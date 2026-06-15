// fichero 45069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45069;

Registro45069 crear_registro45069(int id) {
    Registro45069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
