// fichero 24261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24261;

Registro24261 crear_registro24261(int id) {
    Registro24261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
