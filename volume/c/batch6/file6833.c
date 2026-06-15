// fichero 6833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6833;

Registro6833 crear_registro6833(int id) {
    Registro6833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
