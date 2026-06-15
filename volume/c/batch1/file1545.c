// fichero 1545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1545;

Registro1545 crear_registro1545(int id) {
    Registro1545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
