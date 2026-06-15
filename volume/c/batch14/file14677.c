// fichero 14677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14677;

Registro14677 crear_registro14677(int id) {
    Registro14677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
