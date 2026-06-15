// fichero 16741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16741;

Registro16741 crear_registro16741(int id) {
    Registro16741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
