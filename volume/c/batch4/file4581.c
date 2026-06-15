// fichero 4581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4581;

Registro4581 crear_registro4581(int id) {
    Registro4581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
