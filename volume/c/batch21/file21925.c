// fichero 21925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21925;

Registro21925 crear_registro21925(int id) {
    Registro21925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
