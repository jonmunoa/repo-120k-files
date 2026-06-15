// fichero 20677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20677;

Registro20677 crear_registro20677(int id) {
    Registro20677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
