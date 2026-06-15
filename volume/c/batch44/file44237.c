// fichero 44237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44237;

Registro44237 crear_registro44237(int id) {
    Registro44237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
