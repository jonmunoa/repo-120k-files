// fichero 43997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43997;

Registro43997 crear_registro43997(int id) {
    Registro43997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
