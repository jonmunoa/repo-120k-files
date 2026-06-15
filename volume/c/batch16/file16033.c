// fichero 16033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16033;

Registro16033 crear_registro16033(int id) {
    Registro16033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
