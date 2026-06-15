// fichero 31033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31033;

Registro31033 crear_registro31033(int id) {
    Registro31033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
