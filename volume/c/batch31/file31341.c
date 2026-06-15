// fichero 31341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31341;

Registro31341 crear_registro31341(int id) {
    Registro31341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
