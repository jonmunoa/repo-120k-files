// fichero 43153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43153;

Registro43153 crear_registro43153(int id) {
    Registro43153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
