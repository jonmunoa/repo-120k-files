// fichero 7489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7489;

Registro7489 crear_registro7489(int id) {
    Registro7489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
