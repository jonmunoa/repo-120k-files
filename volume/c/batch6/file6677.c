// fichero 6677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6677;

Registro6677 crear_registro6677(int id) {
    Registro6677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
