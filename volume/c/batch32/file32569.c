// fichero 32569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32569;

Registro32569 crear_registro32569(int id) {
    Registro32569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
