// fichero 37833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37833;

Registro37833 crear_registro37833(int id) {
    Registro37833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
