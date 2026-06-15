// fichero 4997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4997;

Registro4997 crear_registro4997(int id) {
    Registro4997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
