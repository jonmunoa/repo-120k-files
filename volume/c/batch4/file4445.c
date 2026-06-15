// fichero 4445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4445;

Registro4445 crear_registro4445(int id) {
    Registro4445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
