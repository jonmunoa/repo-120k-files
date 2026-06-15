// fichero 33985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33985;

Registro33985 crear_registro33985(int id) {
    Registro33985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
