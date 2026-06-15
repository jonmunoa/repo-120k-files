// fichero 30365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30365;

Registro30365 crear_registro30365(int id) {
    Registro30365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
