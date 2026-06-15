// fichero 33517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33517;

Registro33517 crear_registro33517(int id) {
    Registro33517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
