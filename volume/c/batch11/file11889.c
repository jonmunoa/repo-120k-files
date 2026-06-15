// fichero 11889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11889;

Registro11889 crear_registro11889(int id) {
    Registro11889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
