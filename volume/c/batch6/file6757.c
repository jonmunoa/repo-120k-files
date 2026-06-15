// fichero 6757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6757;

Registro6757 crear_registro6757(int id) {
    Registro6757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
