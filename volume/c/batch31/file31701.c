// fichero 31701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31701;

Registro31701 crear_registro31701(int id) {
    Registro31701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
