// fichero 42749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42749;

Registro42749 crear_registro42749(int id) {
    Registro42749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
