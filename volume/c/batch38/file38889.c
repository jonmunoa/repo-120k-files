// fichero 38889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38889;

Registro38889 crear_registro38889(int id) {
    Registro38889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
