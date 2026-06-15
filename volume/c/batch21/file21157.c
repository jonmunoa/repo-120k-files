// fichero 21157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21157;

Registro21157 crear_registro21157(int id) {
    Registro21157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
