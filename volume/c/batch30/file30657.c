// fichero 30657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30657;

Registro30657 crear_registro30657(int id) {
    Registro30657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
