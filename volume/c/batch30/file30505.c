// fichero 30505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30505;

Registro30505 crear_registro30505(int id) {
    Registro30505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
