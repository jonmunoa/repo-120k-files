// fichero 20541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20541;

Registro20541 crear_registro20541(int id) {
    Registro20541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
