// fichero 16605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16605;

Registro16605 crear_registro16605(int id) {
    Registro16605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
