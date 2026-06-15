// fichero 6365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6365;

Registro6365 crear_registro6365(int id) {
    Registro6365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
