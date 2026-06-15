// fichero 31665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31665;

Registro31665 crear_registro31665(int id) {
    Registro31665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
