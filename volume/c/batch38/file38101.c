// fichero 38101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38101;

Registro38101 crear_registro38101(int id) {
    Registro38101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
