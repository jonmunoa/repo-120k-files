// fichero 31769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31769;

Registro31769 crear_registro31769(int id) {
    Registro31769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
