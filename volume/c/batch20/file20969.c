// fichero 20969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20969;

Registro20969 crear_registro20969(int id) {
    Registro20969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
