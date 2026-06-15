// fichero 31501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31501;

Registro31501 crear_registro31501(int id) {
    Registro31501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
