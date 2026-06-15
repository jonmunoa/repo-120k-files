// fichero 16169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16169;

Registro16169 crear_registro16169(int id) {
    Registro16169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
