// fichero 19937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19937;

Registro19937 crear_registro19937(int id) {
    Registro19937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
