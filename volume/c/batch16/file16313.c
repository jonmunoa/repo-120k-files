// fichero 16313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16313;

Registro16313 crear_registro16313(int id) {
    Registro16313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
