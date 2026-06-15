// fichero 47889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47889;

Registro47889 crear_registro47889(int id) {
    Registro47889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
