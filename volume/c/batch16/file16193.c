// fichero 16193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16193;

Registro16193 crear_registro16193(int id) {
    Registro16193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
