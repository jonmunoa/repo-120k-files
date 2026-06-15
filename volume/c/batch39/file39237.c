// fichero 39237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39237;

Registro39237 crear_registro39237(int id) {
    Registro39237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
