// fichero 16857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16857;

Registro16857 crear_registro16857(int id) {
    Registro16857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
