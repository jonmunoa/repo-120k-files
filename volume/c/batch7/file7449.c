// fichero 7449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7449;

Registro7449 crear_registro7449(int id) {
    Registro7449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
