// fichero 29453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29453;

Registro29453 crear_registro29453(int id) {
    Registro29453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
