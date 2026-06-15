// fichero 4661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4661;

Registro4661 crear_registro4661(int id) {
    Registro4661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
