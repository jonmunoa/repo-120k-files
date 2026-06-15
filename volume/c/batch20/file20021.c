// fichero 20021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20021;

Registro20021 crear_registro20021(int id) {
    Registro20021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
