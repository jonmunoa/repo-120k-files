// fichero 1445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1445;

Registro1445 crear_registro1445(int id) {
    Registro1445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
