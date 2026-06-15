// fichero 35889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35889;

Registro35889 crear_registro35889(int id) {
    Registro35889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
