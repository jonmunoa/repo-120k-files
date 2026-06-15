// fichero 16833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16833;

Registro16833 crear_registro16833(int id) {
    Registro16833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
