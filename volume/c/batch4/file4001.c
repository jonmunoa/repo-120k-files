// fichero 4001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4001;

Registro4001 crear_registro4001(int id) {
    Registro4001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
