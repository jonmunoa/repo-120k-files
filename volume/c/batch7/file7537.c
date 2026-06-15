// fichero 7537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7537;

Registro7537 crear_registro7537(int id) {
    Registro7537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
