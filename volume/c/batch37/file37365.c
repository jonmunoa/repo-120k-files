// fichero 37365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37365;

Registro37365 crear_registro37365(int id) {
    Registro37365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
