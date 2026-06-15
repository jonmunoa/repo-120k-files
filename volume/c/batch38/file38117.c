// fichero 38117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38117;

Registro38117 crear_registro38117(int id) {
    Registro38117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
