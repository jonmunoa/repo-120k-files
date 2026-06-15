// fichero 31377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31377;

Registro31377 crear_registro31377(int id) {
    Registro31377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
