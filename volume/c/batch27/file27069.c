// fichero 27069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27069;

Registro27069 crear_registro27069(int id) {
    Registro27069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
