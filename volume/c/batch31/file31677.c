// fichero 31677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31677;

Registro31677 crear_registro31677(int id) {
    Registro31677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
