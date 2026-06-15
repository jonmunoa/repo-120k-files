// fichero 31921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31921;

Registro31921 crear_registro31921(int id) {
    Registro31921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
