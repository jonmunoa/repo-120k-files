// fichero 31517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31517;

Registro31517 crear_registro31517(int id) {
    Registro31517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
