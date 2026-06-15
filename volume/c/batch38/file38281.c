// fichero 38281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38281;

Registro38281 crear_registro38281(int id) {
    Registro38281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
