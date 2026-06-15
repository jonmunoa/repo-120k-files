// fichero 16997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16997;

Registro16997 crear_registro16997(int id) {
    Registro16997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
