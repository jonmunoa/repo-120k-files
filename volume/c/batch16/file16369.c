// fichero 16369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16369;

Registro16369 crear_registro16369(int id) {
    Registro16369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
