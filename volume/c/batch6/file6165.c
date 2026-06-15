// fichero 6165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6165;

Registro6165 crear_registro6165(int id) {
    Registro6165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
