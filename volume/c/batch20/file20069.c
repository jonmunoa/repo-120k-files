// fichero 20069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20069;

Registro20069 crear_registro20069(int id) {
    Registro20069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
