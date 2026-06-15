// fichero 29045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29045;

Registro29045 crear_registro29045(int id) {
    Registro29045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
