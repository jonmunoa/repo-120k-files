// fichero 45281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45281;

Registro45281 crear_registro45281(int id) {
    Registro45281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
