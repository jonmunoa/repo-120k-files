// fichero 46677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46677;

Registro46677 crear_registro46677(int id) {
    Registro46677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
