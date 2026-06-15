// fichero 21833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21833;

Registro21833 crear_registro21833(int id) {
    Registro21833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
