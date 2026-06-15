// fichero 14725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14725;

Registro14725 crear_registro14725(int id) {
    Registro14725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
