// fichero 293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro293;

Registro293 crear_registro293(int id) {
    Registro293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
