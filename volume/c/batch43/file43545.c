// fichero 43545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43545;

Registro43545 crear_registro43545(int id) {
    Registro43545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
