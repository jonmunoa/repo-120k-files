// fichero 47545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47545;

Registro47545 crear_registro47545(int id) {
    Registro47545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
