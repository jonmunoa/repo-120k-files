// fichero 7833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7833;

Registro7833 crear_registro7833(int id) {
    Registro7833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
