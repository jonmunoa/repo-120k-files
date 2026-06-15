// fichero 38365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38365;

Registro38365 crear_registro38365(int id) {
    Registro38365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
