// fichero 4569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4569;

Registro4569 crear_registro4569(int id) {
    Registro4569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
