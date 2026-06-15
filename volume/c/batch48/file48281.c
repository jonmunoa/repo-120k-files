// fichero 48281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48281;

Registro48281 crear_registro48281(int id) {
    Registro48281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
