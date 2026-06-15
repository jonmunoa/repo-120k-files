// fichero 33197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33197;

Registro33197 crear_registro33197(int id) {
    Registro33197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
