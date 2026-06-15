// fichero 8833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8833;

Registro8833 crear_registro8833(int id) {
    Registro8833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
