// fichero 24833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24833;

Registro24833 crear_registro24833(int id) {
    Registro24833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
