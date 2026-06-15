// fichero 29445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29445;

Registro29445 crear_registro29445(int id) {
    Registro29445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
