// fichero 35105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35105;

Registro35105 crear_registro35105(int id) {
    Registro35105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
