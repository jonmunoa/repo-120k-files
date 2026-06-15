// fichero 16769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16769;

Registro16769 crear_registro16769(int id) {
    Registro16769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
