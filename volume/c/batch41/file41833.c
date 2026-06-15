// fichero 41833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41833;

Registro41833 crear_registro41833(int id) {
    Registro41833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
