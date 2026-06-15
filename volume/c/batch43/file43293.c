// fichero 43293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43293;

Registro43293 crear_registro43293(int id) {
    Registro43293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
