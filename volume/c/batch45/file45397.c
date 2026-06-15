// fichero 45397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45397;

Registro45397 crear_registro45397(int id) {
    Registro45397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
