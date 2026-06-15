// fichero 31453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31453;

Registro31453 crear_registro31453(int id) {
    Registro31453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
