// fichero 6317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6317;

Registro6317 crear_registro6317(int id) {
    Registro6317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
