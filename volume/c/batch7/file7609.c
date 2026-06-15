// fichero 7609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7609;

Registro7609 crear_registro7609(int id) {
    Registro7609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
