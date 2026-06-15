// fichero 42621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42621;

Registro42621 crear_registro42621(int id) {
    Registro42621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
