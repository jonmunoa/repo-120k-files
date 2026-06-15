// fichero 20689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20689;

Registro20689 crear_registro20689(int id) {
    Registro20689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
