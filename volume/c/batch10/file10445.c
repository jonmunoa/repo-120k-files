// fichero 10445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10445;

Registro10445 crear_registro10445(int id) {
    Registro10445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
