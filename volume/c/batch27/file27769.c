// fichero 27769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27769;

Registro27769 crear_registro27769(int id) {
    Registro27769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
