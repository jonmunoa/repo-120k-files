// fichero 6537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6537;

Registro6537 crear_registro6537(int id) {
    Registro6537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
