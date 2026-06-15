// fichero 16117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16117;

Registro16117 crear_registro16117(int id) {
    Registro16117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
