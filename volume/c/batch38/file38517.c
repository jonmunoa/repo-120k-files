// fichero 38517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38517;

Registro38517 crear_registro38517(int id) {
    Registro38517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
