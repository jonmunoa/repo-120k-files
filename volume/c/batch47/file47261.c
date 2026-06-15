// fichero 47261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47261;

Registro47261 crear_registro47261(int id) {
    Registro47261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
