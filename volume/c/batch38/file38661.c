// fichero 38661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38661;

Registro38661 crear_registro38661(int id) {
    Registro38661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
