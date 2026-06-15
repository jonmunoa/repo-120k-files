// fichero 31493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31493;

Registro31493 crear_registro31493(int id) {
    Registro31493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
