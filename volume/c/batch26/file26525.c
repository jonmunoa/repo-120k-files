// fichero 26525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26525;

Registro26525 crear_registro26525(int id) {
    Registro26525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
