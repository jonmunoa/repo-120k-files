// fichero 7545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7545;

Registro7545 crear_registro7545(int id) {
    Registro7545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
