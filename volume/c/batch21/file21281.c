// fichero 21281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21281;

Registro21281 crear_registro21281(int id) {
    Registro21281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
