// fichero 14157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14157;

Registro14157 crear_registro14157(int id) {
    Registro14157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
