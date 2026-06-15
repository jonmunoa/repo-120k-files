// fichero 16613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16613;

Registro16613 crear_registro16613(int id) {
    Registro16613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
