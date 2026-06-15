// fichero 16153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16153;

Registro16153 crear_registro16153(int id) {
    Registro16153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
