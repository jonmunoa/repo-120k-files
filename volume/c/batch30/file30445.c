// fichero 30445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30445;

Registro30445 crear_registro30445(int id) {
    Registro30445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
