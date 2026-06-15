// fichero 41077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41077;

Registro41077 crear_registro41077(int id) {
    Registro41077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
