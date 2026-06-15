// fichero 39445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39445;

Registro39445 crear_registro39445(int id) {
    Registro39445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
