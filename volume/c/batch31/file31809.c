// fichero 31809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31809;

Registro31809 crear_registro31809(int id) {
    Registro31809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
