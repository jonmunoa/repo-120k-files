// fichero 8317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8317;

Registro8317 crear_registro8317(int id) {
    Registro8317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
