// fichero 38605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38605;

Registro38605 crear_registro38605(int id) {
    Registro38605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
