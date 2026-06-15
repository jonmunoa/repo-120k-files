// fichero 16961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16961;

Registro16961 crear_registro16961(int id) {
    Registro16961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
