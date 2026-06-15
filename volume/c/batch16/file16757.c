// fichero 16757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16757;

Registro16757 crear_registro16757(int id) {
    Registro16757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
