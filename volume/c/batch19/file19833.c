// fichero 19833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19833;

Registro19833 crear_registro19833(int id) {
    Registro19833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
