// fichero 11537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11537;

Registro11537 crear_registro11537(int id) {
    Registro11537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
