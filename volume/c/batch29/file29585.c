// fichero 29585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29585;

Registro29585 crear_registro29585(int id) {
    Registro29585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
