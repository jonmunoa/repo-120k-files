// fichero 34833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34833;

Registro34833 crear_registro34833(int id) {
    Registro34833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
