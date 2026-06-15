// fichero 49677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49677;

Registro49677 crear_registro49677(int id) {
    Registro49677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
