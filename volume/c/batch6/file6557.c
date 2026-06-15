// fichero 6557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6557;

Registro6557 crear_registro6557(int id) {
    Registro6557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
