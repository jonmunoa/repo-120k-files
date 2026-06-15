// fichero 49833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49833;

Registro49833 crear_registro49833(int id) {
    Registro49833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
